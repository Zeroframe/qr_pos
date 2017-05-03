#ifndef QT_TEST_H
#define QT_TEST_H

#include <QMainWindow>
#include "ui_qt_test.h"

class qt_test : public QMainWindow
{
    Q_OBJECT

public:
    qt_test(QWidget *parent = 0);
    ~qt_test();

private slots:
    void on_payment_button_clicked();

private:
    Ui::qt_testClass ui;
};

#endif // QT_TEST_H
