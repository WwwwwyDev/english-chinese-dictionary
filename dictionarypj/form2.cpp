#include "form2.h"
#include "ui_form2.h"
#include "widget.h"
Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
}

Form2::~Form2()
{
    delete ui;
}

void Form2::work()
{
    this->sumn = 0;
    for (int i = 0; i < 26; i++){
        QString str = QString("hashmapdata/%1.txt").arg(char('a'+i));
        this->word[i] = HashMap(str,500);
        this->word[i].fileRead(str);
        this->sumn += this->word[i].getLength();
    }
    ui->label_12->setText(QString("%1").arg(this->sumn));
}

void Form2::on_pushButton_4_clicked() //返回
{
    Widget *w = new Widget;
    w->show();
    this->close();
}

void Form2::on_pushButton_clicked() //查找
{
    QString searchWord = ui->lineEdit->text();
    if (searchWord == "")
    {
        ui->label_3->setText("LineEdit is empty");
        return;
    }
    char headsw = searchWord.at(0).unicode();
    if (headsw >= 'a' && headsw <= 'z')
    {
        ui->label_3->setText(this->word[headsw - 'a'].searchWord(searchWord));
    }
    else
    {
        ui->label_3->setText("illegal word");
        return;
    }
}

void Form2::on_pushButton_2_clicked() //添加
{
    QString ew = ui->lineEdit_2->text();
    QString cm = ui->lineEdit_4->text();
    if (ew == "" || cm == "")
    {
        ui->label_4->setText("LineEdit is empty");
        return;
    }
    char headew = ew.at(0).unicode();
    if (headew >= 'a' && headew <= 'z')
    {
        if (word[headew - 'a'].insertWord(ew,cm))
        {
            this->word[headew - 'a'].fileWrite(this->word[headew - 'a'].getFilePath());
            this->sumn ++;
            ui->label_12->setText(QString("%1").arg(this->sumn));
            QString ifm = "successfully add \"" + ew +"\"";
            ui->label_4->setText(ifm);
        }
        else ui->label_4->setText("the word is already existent");
    }
    else ui->label_4->setText("illegal word");
}

void Form2::on_pushButton_3_clicked() //删除
{
    QString ew = ui->lineEdit_3->text();
    if (ew == "")
    {
        ui->label_6->setText("LineEdit is empty");
        return;
    }
    char headew = ew.at(0).unicode();
    if (headew >= 'a' && headew <= 'z')
    {
        if (word[headew - 'a'].deleteWord(ew))
        {
            word[headew - 'a'].fileWrite(this->word[headew - 'a'].getFilePath());
            this->sumn --;
            ui->label_12->setText(QString("%1").arg(this->sumn));
            QString ifm = "successfully delete \"" + ew +"\"";
            ui->label_6->setText(ifm);
        }
        else ui->label_6->setText("the word isn't existent");
    }
    else ui->label_6->setText("illegal word");
}
