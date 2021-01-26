//
// Created by plays on 1/19/2021.
//

#ifndef UNREALIPCINTERFACE_UNREALIPCCONTROLLER_H
#define UNREALIPCINTERFACE_UNREALIPCCONTROLLER_H
#include <string>
#include <queue>

//Below are all of the defined message types. Currently placeholders for testing. All flags must be a power of 2
#define MESSAGE_ONE 0x01
#define MESSAGE_TWO 0x02
#define MESSAGE_THREE 0x04
#define MESSAGE_FOUR 0x08
#define MESSAGE_FIVE 0x10

//LIBRARY INSTRUCTIONS:
//On UnrealEngine:
//1.Call instantiate_shared_mem(). Pass the name of this shared memory region. In the UI, do the same with access_shared_mem.
//instantiate_shared_mem MUST be called in Unreal, and it must be called BEFORE access_shared_mem. The string passed to
//both must be exactly the same. Each function may only ever be called ONCE
//
//2.Use send_message to set a flag on the buffer. You can use the | operator to use multiple flags at once.
//Flags are set above as Macros
//I.E.: send_message(MESSAGE_ONE | MESSAGE_TWO), send_message(MESSAGE_THREE)
//send_message sets a boolean flag to true that indicates the buffer has been modified.
// message_received() returns the value of that buffer.
//
//3.Call message_received() to determine if the buffer state has changed since you last read it.
//
//4. Call receive_message to grab the entire flag buffer and check which flags are set.
//A flag is set when desired_flag & flag_buffer == desired_flag

bool instantiate_shared_mem(std::string memID_in); //Creates the shared memory buffer for communication
bool access_shared_mem(std::string memID_in);      //Accesses the shared memory and casts a structure to it.
void send_message(uint16_t message = 0x00);
uint16_t receive_message();
bool message_received();
std::string debug_output();





#endif //UNREALIPCINTERFACE_UNREALIPCCONTROLLER_H
