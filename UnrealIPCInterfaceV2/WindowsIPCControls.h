//
// Created by plays on 4/4/2021.
//

#ifndef UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
#define UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
#include <Windows.h>
#include <tchar.h>
#include <conio.h>
#define BUF_SIZE 8
class IPCObject{
public:
  virtual void sendMessage(UINT16 mess_in) = 0;
  virtual UINT16 receiveMessage() = 0;
  virtual bool messageReceived() = 0;
};

class IPCCreator : IPCObject{
private:
    HANDLE hMapFile = NULL;
    UINT16 * pBuf = NULL;
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
    UINT16 * pBuf = NULL;
public:
    IPCReceiver(TCHAR sharedMemName[]);
    ~IPCReceiver();
    void sendMessage(UINT16 mess_in) override;
    UINT16 receiveMessage() override;
    bool messageReceived() override;
};
#endif //UNREALIPCINTERFACEV2_WINDOWSIPCCONTROLS_H
