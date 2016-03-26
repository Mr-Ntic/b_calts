#include "b_calts.h"
#include "ui_b_calts.h"

B_CALTS::B_CALTS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::B_CALTS)
{
    ui->setupUi(this);
}

B_CALTS::~B_CALTS()
{
    delete ui;
}
