#include "form1.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);
    this->word = OrderedList("1.txt");
    word.fileRead("1.txt");
    word.olDebug();
    word.fileWrite("1.txt");
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_pushButton_clicked() //查找
{
    QString searchWord = ui->lineEdit->text();
    if (searchWord == "")
    {
        ui->label_3->setText("LineEdit is empty");
        return;
    }
    ui->label_3->setText(this->word.searchWord(searchWord));
}

void Form1::on_pushButton_2_clicked()  //添加
{
    QString ew = ui->lineEdit_2->text();
    QString cm = ui->lineEdit_4->text();
    if (ew == "" || cm == "")
    {
        ui->label_4->setText("LineEdit is empty");
        return;
    }
    if (word.insertWord(ew,cm))
    {
        word.fileWrite("1.txt");
        ui->label_4->setText("successful");
    }
    else ui->label_4->setText("the word is already existent");
}

void Form1::on_pushButton_3_clicked() //删除
{
    QString ew = ui->lineEdit_3->text();
    if (ew == "")
    {
        ui->label_6->setText("LineEdit is empty");
        return;
    }
    if (word.deleteWord(ew))
    {
        word.fileWrite("1.txt");
        ui->label_6->setText("successful");
    }
    else ui->label_6->setText("the word isn't existent");
}
