#include "widget.h"
#include <QApplication>
int main(int argc, char *argv[])   
{   QString z = "zoo";
    qDebug() <<z.compare("zoology");
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
