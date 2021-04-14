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

}

//Will tell the the loop to stop and wake it up if it is asleep.
PipelineThread::~PipelineThread()
{
    abort = true;
    condition.wakeOne();
    wait();
}


void PipelineThread::run()
{
    EyeFrameData temp;
    DWORD bytesRead = 0;
    bool result = false;
    forever {
        if (abort) return;

        result = ReadFile(
                Pipe,                   //Pipe to read from
                &temp,                  //Where to write the pipe data to
                sizeof(EyeFrameData),   //Max number of bytes to read
                &bytesRead,             //Number of bytes read
                NULL                    //Whether to use overlapped IO (blocking)
        );

        if (!result) {
            std::cout << "Error in reading from pipe!" << std::endl;
        }

        emit frameData(temp);
    }
}
