#ifndef ERRORLOGWINDOW_H
#define ERRORLOGWINDOW_H

#include <QWidget>

namespace Ui {
class ErrorLogWindow;
}

class ErrorLogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ErrorLogWindow(QWidget *parent = 0);
    ~ErrorLogWindow();
    void FillSystemLogs();

private:
    Ui::ErrorLogWindow *ui;
};

#endif // ERRORLOGWINDOW_H
