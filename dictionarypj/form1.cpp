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
    word.deleteWord("zebra");
    word.insertWord("zebra","hello");
    word.fileWrite("1.txt");
}

Form1::~Form1()
{
    delete ui;
}

void Form1::on_pushButton_clicked()
{
    QString serachWord = ui->lineEdit->text();
    ui->label_3->setText(this->word.searchWord(serachWord));
}
