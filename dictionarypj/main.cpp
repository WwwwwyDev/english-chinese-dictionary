#include "widget.h"
#include <QApplication>
#include "trietree.h"
int main(int argc, char *argv[])   
{
    TrieTree t("l.txt");
    t.fileRead("l.txt");
    t.insertWord("lppw","test");
    t.deleteWord("lppw");
    qDebug() << t.searchWord("l/c");
    t.fileWrite("l.txt");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
