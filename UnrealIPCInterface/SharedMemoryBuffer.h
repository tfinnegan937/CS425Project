//
// Created by plays on 1/19/2021.
//

#ifndef UNREALIPCINTERFACE_SHAREDMEMORYBUFFER_H
#define UNREALIPCINTERFACE_SHAREDMEMORYBUFFER_H
#include <string>
#include <boost/interprocess/sync/interprocess_mutex.hpp>
using namespace std;
typedef struct SharedMemoryBuffer{
uint16_t unreal_buffer_in = 0x00;  //The string buffer for messages that UnrealEngine is receiving
uint16_t interface_buffer_in = 0x00; //The string buffer for messages that UnrealEngine is sending


bool unreal_buffer_modified; //Has UnrealEngine read the data on the buffer yet?
bool interface_buffer_modified; //Has the Desktop Interface read the data on the buffer yet?

boost::interprocess::interprocess_mutex mutex; //mutex lock for process synchronization

} SharedMemoryBuffer;
#endif //UNREALIPCINTERFACE_SHAREDMEMORYBUFFER_H
