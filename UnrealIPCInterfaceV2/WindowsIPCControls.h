//
// Created by plays on 4/4/2021.
//

#ifndef UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
#define UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#define BUF_SIZE 8

//Interface Outbound Flags
#define IPC_INITIALIZED 0x01
#define QUEUE_SP 0x02
#define QUEUE_SH 0x04
#define QUEUE_SV 0x08
#define QUEUE_CON 0x10
#define QUEUE_VORH 0x20
#define QUEUE_VORV 0x40
#define QUEUE_VMS 0x80
#define BEGIN_ALL 0x100
#define STOP_ALL 0x200
#define DATA_RECEIVED 0x400
#define REQ_SHUTDOWN 0x800
#define SHUTDOWN 0x1000

//UnrealEngine Outbound Flags
#define CONF_SHUTDOWN 0x01
#define SP_STARTED 0x02
#define SP_COMPLETED 0x04
#define SH_STARTED 0x08
#define SH_COMPLETED 0x10
#define SV_STARTED 0x20
#define SV_COMPLETED 0x40
#define CON_STARTED 0x80
#define CON_COMPLETED 0x100
#define VORH_STARTED 0x200
#define VORH_COMPLETED 0x400
#define VORV_STARTED 0x800
#define VORV_COMPLETED 0x1000
#define VMS_STARTED 0x2000
#define VMS_COMPLETED 0x4000
#define TESTS_COMPLETED 0x8000
#define BUFF_NAME "unreal_memory_buff"
#define MUTEX_NAME "unreal_mem_mutex"
class IPCObject{
public:
  virtual void sendMessage(UINT16 mess_in) = 0;
  virtual UINT16 receiveMessage() = 0;
  virtual bool messageReceived() = 0;
};

class IPCCreator : IPCObject{
private:
    HANDLE hMapFile = NULL;
    HANDLE hMutex = NULL;
    volatile UINT16 * pBuf = NULL;
public:
    IPCCreator(TCHAR sharedMemName[]);
    ~IPCCreator();
    void sendMessage(UINT16 mess_in) override;
    UINT16 receiveMessage() override;
    bool messageReceived() override;
};


class IPCReceiver : IPCObject{
private:
    HANDLE hMapFile = NULL;
    HANDLE hMutex = NULL;
    volatile UINT16 * pBuf = NULL;
public:
    IPCReceiver(TCHAR sharedMemName[]);
    ~IPCReceiver();
    void sendMessage(UINT16 mess_in) override;
    UINT16 receiveMessage() override;
    bool messageReceived() override;
};


#endif //UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
