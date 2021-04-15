#include "PipelineThread.h"

PipelineThread::PipelineThread(QObject *parent)
    : QThread(parent)
{
    const int INSTANCES = 1;
    const int BUFFERINSIZE = 512;
    const int BUFFEROUTSIZE = 512;
    const int TIMEOUTTIME = 0;

    std::cout << "Creating new pipeline!" << std::endl;

    Pipe = CreateNamedPipe(
            PIPELINE_NAME,
            PIPE_ACCESS_INBOUND,
            PIPE_TYPE_MESSAGE,
            INSTANCES,
            BUFFERINSIZE,
            BUFFEROUTSIZE,
            TIMEOUTTIME,
            NULL //No security
        );
    abort = 0;
}

//Will tell the the loop to stop and wake it up if it is asleep.
PipelineThread::~PipelineThread()
{
    std::cout << "Destroying data pipeline!" << std::endl;
    //Tell the thread to stop looping.
    abort = 1;
    //Wait until it exits.
    wait();
    std::cout << "Destroyed data pipeline!" << std::endl;
}


void PipelineThread::run()
{
    EyeFrameData temp;
    DWORD bytesRead = 0;
    DWORD bytesAvailable = 0;
    bool result = false;
    std::cout << "Successfully created pipeline!" << std::endl;
    while(this->abort == 0) {
        PeekNamedPipe(
                Pipe,   //Name of pipe to read
                NULL,   //Buffer to store data to, only checking if data exists so null
                NULL,   //Size of a data packet, only checking if data exists so null
                NULL,   //Returns number of bytes read, unused since only checking data
                &bytesAvailable, //How many bytes are in the pipe
                NULL    //Remaining data in pipe after read. Unused, since no reading.
        );

        if (bytesAvailable > 0) {
            result = ReadFile(
                    Pipe,                   //Pipe to read from
                    &temp,                  //Where to write the pipe data to
                    sizeof(EyeFrameData),   //Max number of bytes to read
                    &bytesRead,             //Number of bytes read
                    NULL                    //Whether to use overlapped IO (blocking)
            );

            if (result) {
                emit frameData(temp);
            }
        }
    }
}
