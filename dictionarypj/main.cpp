#include "widget.h"
#include <QApplication>
#include "hashmap.h"
int main(int argc, char *argv[])   
{
    LinkedList test;
    test.addToHead("1","1n");
    test.addToHead("2","1t");
    test.addToHead("4","1q");
    test.addToHead("5","1s");
    test.lsDebug();
    qDebug() <<test.deleteWord("0");
    test.lsDebug();
    qDebug() << test.getLength();
    qDebug() << test.searchWord("5");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
