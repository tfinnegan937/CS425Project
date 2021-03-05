//
// Created by plays on 1/19/2021.
//

#ifndef UNREALIPCINTERFACE_UNREALIPCCONTROLLER_H
#define UNREALIPCINTERFACE_UNREALIPCCONTROLLER_H
#include <string>
#include <queue>

//Below are all of the defined message types. Currently placeholders for testing. All flags must be a power of 2

//Shared Flags
#define IPC_INITIALIZED 0x01

//Interface Outbound Flags
#define QUEUE_SP 0x02
#define QUEUE_SH 0x04
#define QUEUE_SV 0x08
#define QUEUE_CON 0x10
#define QUEUE_VORH 0x20
#define QUEUE_VORV 0x40
#define QUEUE_VORV 0x80
#define BEGIN_ALL 0x100
#define STOP_ALL 0x200
#define DATA_RECEIVED 0x400
#define REQ_SHUTDOWN 0x800
#define SHUTDOWN 0x1000

//UnrealEngine Outbound Flags

#define TESTS_STARTED 0x02
#define SP_STARTED 0x04
#define SP_COMPLETED 0x08
#define SH_STARTED 0x10
#define SH_COMPLETED 0x20
#define SV_STARTED 0x40
#define SV_COMPLETED 0x80
#define CON_STARTED 0x100
#define CON_COMPLETED 0x200
#define VORH_STARTED 0x400
#define VORH_COMPLETED 0x800
#define VORV_STARTED 0x1000
#define VORV_COMPLETED 0x2000
#define TESTS_COMPLETED 0x4000
#define CONF_SHUTDOWN 0x8000

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
