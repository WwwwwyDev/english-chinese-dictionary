#include "widget.h"
#include <QApplication>
#include "trietree.h"
int main(int argc, char *argv[])   
{
    TrieTree t("l.txt");
    t.fileRead("l.txt");
    qDebug() <<t.insertWord("l/c","test");
    qDebug() << t.searchWord("above-mentioned");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
