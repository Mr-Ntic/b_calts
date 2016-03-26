#ifndef B_CALTS_H
#define B_CALTS_H

#include <QMainWindow>

namespace Ui {
class B_CALTS;
}

class B_CALTS : public QMainWindow
{
    Q_OBJECT

public:
    explicit B_CALTS(QWidget *parent = 0);
    ~B_CALTS();

private:
    Ui::B_CALTS *ui;
};

#endif // B_CALTS_H
