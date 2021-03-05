#ifndef QRESULTSWINDOW_H
#define QRESULTSWINDOW_H

#pragma push_macro("slots")
#undef slots
#include "Python.h"
#pragma pop_macro("slots")
#include <QMainWindow>
#include <QPlainTextEdit>


namespace Ui {
class QResultsWindow;
}

class QResultsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QResultsWindow(QWidget *parent = nullptr);
    ~QResultsWindow();

private:
    Ui::QResultsWindow *ui;
    QPlainTextEdit* patientNameText;
    QThread* chart_thread;

    const char* eye_tracking_code;

    void GetEyeTrackingGraph();
};

#endif // QRESULTSWINDOW_H
