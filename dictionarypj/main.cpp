#include "widget.h"
#include <QApplication>
#include "hashmap.h"
int main(int argc, char *argv[])   
{
    HashMap test("a.txt",500);
    test.fileRead("a.txt");
    test.hsDebug();
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
