#include "qt_test.h"

qt_test::qt_test(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

qt_test::~qt_test()
{

}

void qt_test::on_payment_button_clicked()
{
    qDebug("button Pressed");
}
