#ifndef QRESULTSWINDOW_H
#define QRESULTSWINDOW_H

#include <QMainWindow>

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
};

#endif // QRESULTSWINDOW_H
