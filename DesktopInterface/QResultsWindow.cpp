#include "QResultsWindow.h"
#include "ui_QResultsWindow.h"

QResultsWindow::QResultsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QResultsWindow)
{
    ui->setupUi(this);
}

QResultsWindow::~QResultsWindow()
{
    delete ui;
}
