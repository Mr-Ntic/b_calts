#include "b_calts.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    B_CALTS w;
    w.show();

    return a.exec();
}
