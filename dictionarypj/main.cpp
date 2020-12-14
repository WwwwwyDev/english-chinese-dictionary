#include "widget.h"
#include "orderedlist.h"
#include <QApplication>
int main(int argc, char *argv[])   
{
    OrderedList test("z.txt");
    test.fileRead("z.txt");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
