//
// Created by plays on 4/4/2021.
//

#include "WindowsIPCControls.h"

IPCCreator::IPCCreator(TCHAR *sharedMemName) {
    hMapFile = CreateFileMapping(
            INVALID_HANDLE_VALUE,
            NULL,
            PAGE_READWRITE,
            0,
            BUF_SIZE,
            sharedMemName
            );
    pBuf = (UINT16*) MapViewOfFile(hMapFile,
                                     FILE_MAP_ALL_ACCESS,
                                     0,
                                     0,
                                     BUF_SIZE);
}

void IPCCreator::sendMessage(UINT16 mess_in) {
    if(hMapFile != NULL && pBuf != NULL){
        UINT16 cur_val = pBuf[0];
        UINT16 new_val = cur_val | mess_in;
        CopyMemory(
                (PVOID)(&(pBuf[0])),
                &new_val,
                sizeof(UINT16)
                );
        _getch();
    }
}

UINT16 IPCCreator::receiveMessage() {

    if(hMapFile != NULL && pBuf != NULL){
        UINT16 buf_val = pBuf[1];
        UINT16 zero_val = 0x00;
        CopyMemory(  //Zero memory after reading
                (PVOID)(&pBuf[1]),
                &zero_val,
                sizeof(UINT16)
                );
        _getch();

        return(buf_val);
    }
    return 0;
}

bool IPCCreator::messageReceived() {

    if(pBuf[1] != NULL && pBuf[1] != 0x00){
        return true;
    }
    return false;
}

IPCCreator::~IPCCreator() {
    UnmapViewOfFile((void*)pBuf);
    CloseHandle(hMapFile);
    hMapFile = NULL;
    pBuf = NULL;
}

IPCReceiver::IPCReceiver(TCHAR *sharedMemName) {
    hMapFile = OpenFileMapping(
            FILE_MAP_ALL_ACCESS,
            FALSE,
            sharedMemName
            );

    if(hMapFile != NULL) {
        pBuf = (UINT16 *) MapViewOfFile(hMapFile,
                                        FILE_MAP_ALL_ACCESS,
                                        0,
                                        0,
                                        BUF_SIZE);
    }
}

void IPCReceiver::sendMessage(UINT16 mess_in) {
    if(hMapFile != NULL && pBuf != NULL){
        UINT16 cur_val = pBuf[1];
        UINT16 new_val = cur_val | mess_in;
        CopyMemory(
                (PVOID)(&(pBuf[1])),
                &new_val,
                sizeof(UINT16)
        );
        _getch();
    }
}

UINT16 IPCReceiver::receiveMessage() {

    if(hMapFile != NULL && pBuf != NULL){
        UINT16 buf_val = pBuf[0];
        UINT16 zero_val = 0x00;
        CopyMemory(  //Zero memory after reading
                (PVOID)(&pBuf[0]),
                &zero_val,
                sizeof(UINT16)
        );
        _getch();
        return(buf_val);
    }
    return 0;
}

bool IPCReceiver::messageReceived() {

    if(pBuf[1] != NULL && pBuf[1] != 0x00){
        return true;
    }
    return false;
}

IPCReceiver::~IPCReceiver() {
    UnmapViewOfFile((void*)pBuf);
    CloseHandle(hMapFile);
    hMapFile = NULL;
    pBuf = NULL;
}
