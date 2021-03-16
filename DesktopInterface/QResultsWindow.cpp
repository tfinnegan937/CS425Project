#include "QResultsWindow.h"
#include "ui_QResultsWindow.h"


QResultsWindow::QResultsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QResultsWindow)
{
    ui->setupUi(this);
    StartGraphThread();
}

QResultsWindow::~QResultsWindow()
{
    delete ui;
}

int QResultsWindow::current_graph = 0;
void QResultsWindow::AlternateGraph()
{
    if (current_graph == 0) {
        workerThread->SetData("10 11 12 13 14 15 16 17 18 19 20");
        workerThread->start();
        current_graph = 1;
    } else {
        workerThread->SetData("20 19 18 17 16 15 14 13 12 11 10");
        workerThread->start();
        current_graph = 0;
    }
}

typedef struct{
    PyObject_HEAD
    int (*ptr)(int, int);
} MyFuncPtr;

void QResultsWindow::StartGraphThread()
{
    workerThread = new GraphWorker();
    connect(workerThread, &GraphWorker::GraphReady, this, &QResultsWindow::DisplayGraph);
    workerThread->setup();
}

void QResultsWindow::DisplayGraph(const QByteArray graph_in_base_64)
{
    if(!graph_in_base_64.isNull()) {
        QPixmap image;
        image.loadFromData(QByteArray::fromBase64(graph_in_base_64), "PNG");
        if (image.isNull()) {
            std::cout << "Help";
        }
        ui->EyeTrackingFrame->findChild<QLabel*>("EyeGraph")->setPixmap(image.scaled(ui->EyeTrackingFrame->findChild<QLabel*>("EyeGraph")->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}
