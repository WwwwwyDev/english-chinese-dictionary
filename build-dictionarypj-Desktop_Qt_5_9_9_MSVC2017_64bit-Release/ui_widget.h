/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(507, 269);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 160, 90, 30));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 160, 90, 30));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 441, 81));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 160, 90, 30));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\225\260\346\215\256\347\273\223\346\236\204\350\257\276\347\250\213\350\256\276\350\256\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\346\234\211\345\272\217\350\241\250", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\346\225\243\345\210\227\350\241\250", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p>\346\225\260\346\215\256\347\273\223\346\236\204\350\257\276\347\250\213\350\256\276\350\256\241-\345\220\264\346\226\207\347\233\212</p><p>gitee\347\211\210\346\234\254\345\272\223\345\234\260\345\235\200</p><p><a href=\"https://gitee.com/wu_wen_yi/english-chinese-dictionary/\"><span style=\" text-decoration: underline; color:#007af4;\">https://gitee.com/wu_wen_yi/english-chinese-dictionary/</span></a></p></body></html>", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "Trietree", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
