#include "form1.h"
#include "ui_form1.h"

Form1::Form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);
    this->word = OrderedList("z.txt");
    word.fileRead("z.txt");
    word.olDebug();
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
