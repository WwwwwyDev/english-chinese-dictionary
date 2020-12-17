#include "widget.h"
#include <QApplication>
#include "trietree.h"
int main(int argc, char *argv[])   
{
    TrieTree t;
    t.insertWord("china","test");
    t.insertWord("eklad","awdwa");
    //t.deleteWord("china");
    qDebug() << t.searchWord("china");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
