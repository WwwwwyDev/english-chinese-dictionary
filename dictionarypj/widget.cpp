#include "widget.h"
#include "ui_widget.h"
#include <QProgressDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{   QProgressDialog *pd=new QProgressDialog("load...","cancel",0,100,this);
    pd->setWindowTitle("loading now");
    pd->setValue(50);
    pd->show();
    f1.work();
    pd->setValue(100);
    f1.show();
}
