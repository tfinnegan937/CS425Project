//
// Created by plays on 1/19/2021.
//

#include "UnrealIPCController.h"
#include <boost/interprocess/shared_memory_object.hpp>
#include <boost/interprocess/mapped_region.hpp>
#include <boost/interprocess/sync/scoped_lock.hpp>
#include "SharedMemoryBuffer.h"
#include <iostream>
using namespace boost::interprocess;

//Defined globally here to avoid any boost includes in the header file
bool is_instantiated=false; //Global control variable. Set in the constructor as "false"
                                 //When the IPC is enabled, it becomes "true" and prevents any other IPCController
                                 //objects from becoming enabled.
bool isMemoryOwner=false; //This is true when the current process created the shared memory.

volatile SharedMemoryBuffer * shared_memory_buffer; //This object is a void pointer to avoid having to include SharedMemoryBuffer.h
                                 //The pointer will be cast to a SharedMemoryBuffer* in all functions in the
                                 //associated .cpp file.
void * transmission_address; //This is the address of the mapped region. It should not be referenced directly
                                 //shared_memory_buffer has been created at that address.
shared_memory_object * shm; //The shared memory object pointer
mapped_region * region;
std::string memID;



bool instantiate_shared_mem(string memID_in) {

if(is_instantiated){
    return false;
}else{
    isMemoryOwner = true;
    is_instantiated = true;
    memID = memID_in;
    shared_memory_object::remove(memID.c_str());
    //Create the shared memory region with the intended identifier
    shm = new shared_memory_object(create_only, memID_in.c_str(), read_write);
    shm->truncate(sizeof(SharedMemoryBuffer));
    //Map the created region
    region = new mapped_region((*shm), read_write);
    //Get the address of the map
    transmission_address = ((mapped_region*)region)->get_address();
    //Create the buffer at the given address
    shared_memory_buffer = new (transmission_address) SharedMemoryBuffer;



    shared_memory_buffer->unreal_buffer_modified = true; //indicate that the unreal engine inbound buffer is empty
    shared_memory_buffer->interface_buffer_modified = true; //indicate that the interface inbound buffer is empty.
    return true;
}
}

bool access_shared_mem(string memID_in){
if(is_instantiated){
    return false;
}else{
    try {
        isMemoryOwner = false;
        is_instantiated = true;
        memID = memID_in;
        //Instantiate the shared memory object
        shm = new shared_memory_object(open_only, memID_in.c_str(), read_write);

        //Map the region and get its address
        region = new mapped_region((*shm), read_write);
        transmission_address = (region)->get_address();

        //Construct the shared structure in memory, using the shared address.
        ;
        shared_memory_buffer = static_cast<SharedMemoryBuffer *>(transmission_address);
    }catch(boost::interprocess::interprocess_exception& e){
        return false;
    }
    return true;
}

}



void send_message(uint16_t message) {
    try {
        if (isMemoryOwner) {
            //This object belongs to UnrealEngine
            scoped_lock<interprocess_mutex> lock(
                    ((SharedMemoryBuffer *) shared_memory_buffer)->mutex); //Lock the buffer
            shared_memory_buffer->interface_buffer_in =
                    shared_memory_buffer->interface_buffer_in | message; //Add the flag to the outbound message
            shared_memory_buffer->interface_buffer_modified = true;
        } else {
            //This object belongs to the Desktop Interface
            scoped_lock<interprocess_mutex> lock(
                    ((SharedMemoryBuffer *) shared_memory_buffer)->mutex); //Lock the buffer
            shared_memory_buffer->unreal_buffer_in =
                    shared_memory_buffer->unreal_buffer_in | message; //Add the flag to the outbound message
            shared_memory_buffer->unreal_buffer_modified = true;
        }
    }catch(std::exception& e){
        //TODO: Handle Exception
    }
}

uint16_t receive_message() {
    scoped_lock<interprocess_mutex> lock(((SharedMemoryBuffer*)shared_memory_buffer)->mutex); //Lock the object
    uint16_t buffer_output;

    if(isMemoryOwner){
        shared_memory_buffer->unreal_buffer_modified = false; //Indicate that the buffer is ready again
        buffer_output = shared_memory_buffer->unreal_buffer_in;

        shared_memory_buffer->unreal_buffer_in = 0x00;
    }else{
        shared_memory_buffer->interface_buffer_modified = false; //Indicate that the buffer is ready again
        buffer_output = shared_memory_buffer->interface_buffer_in; //Return the message to the program
        shared_memory_buffer->interface_buffer_in= 0x00;
    }

    return buffer_output;
}

bool message_received() {
    try {
        scoped_lock<interprocess_mutex> lock(((SharedMemoryBuffer *) shared_memory_buffer)->mutex); //Lock the object
        SharedMemoryBuffer *buffer_pointer = (SharedMemoryBuffer *) shared_memory_buffer;
        if (isMemoryOwner) {
            return buffer_pointer->unreal_buffer_modified;
        } else {
            return buffer_pointer->interface_buffer_modified;
        }
    }catch(std::exception & e){
        //TODO: Handle Exception
        return false;
    }
}



string debug_output() {
    string out;

    SharedMemoryBuffer * memory_buffer = (SharedMemoryBuffer*)(shared_memory_buffer);

    out = "";
    out = out + "unreal_in: " + to_string(memory_buffer->unreal_buffer_in) + "\n";
    out = out + "interface_in: " + to_string(memory_buffer->interface_buffer_in) + "\n";

    if(memory_buffer->unreal_buffer_modified == true){
        out = out + "unreal_buffer_modified: " + "true" + "\n";

    }else{
        out = out + "unreal_buffer_modified: " + "false" + "\n";

    }

    if(memory_buffer->interface_buffer_modified == true){
        out = out + "interface_buffer_modified: " + "true" + "\n";

    }else{
        out = out + "interface_buffer_modified: " + "false" + "\n";

    }

    return out;
}
