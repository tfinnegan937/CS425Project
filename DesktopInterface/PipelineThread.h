#ifndef PIPELINEHANDLER_H
#define PIPELINEHANDLER_H

#include <QObject>
#include <QThread>
#include <QWaitCondition>
#include <QDeadlineTimer>
#include <QMutex>
#include <windows.h>
#include <iostream>
#include <queue>
#include "../shared_include/Pipeline_Constants.h"
#include "../shared_include/EyeFrameData.h"

class PipelineThread : public QThread
{
    Q_OBJECT

public:
    PipelineThread(QObject *parent = nullptr);
    ~PipelineThread();


signals:
    void frameData(const EyeFrameData newFrame);

protected:
    void run() override;

private:
    QWaitCondition condition;
    QAtomicInt abort;
    HANDLE Pipe;
};

#endif // PIPELINEHANDLER_H
