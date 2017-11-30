#ifndef TIMINGCHARTWINDOW_H
#define TIMINGCHARTWINDOW_H

#include <QWidget>

namespace Ui {
class TimingChartWindow;
}

class TimingChartWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TimingChartWindow(QWidget *parent = 0);
    ~TimingChartWindow();

private:
    Ui::TimingChartWindow *ui;
};

#endif // TIMINGCHARTWINDOW_H
