#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include "hashmap.h"
namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();
    void work();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Form2 *ui;
    HashMap word[26];
    qint64 sumn;
};

#endif // FORM2_H
