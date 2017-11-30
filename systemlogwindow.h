#ifndef SYSTEMLOGWINDOW_H
#define SYSTEMLOGWINDOW_H

#include <QWidget>

namespace Ui {
class SystemLogWindow;
}

class SystemLogWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SystemLogWindow(QWidget *parent = 0);
    ~SystemLogWindow();
    void FillSystemLogs();

private:
    Ui::SystemLogWindow *ui;
};

#endif // SYSTEMLOGWINDOW_H
