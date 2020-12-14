#include "orderedlist.h"
OrderedList::OrderedList(QString fp)
{
    this->filePath = fp;
}
void OrderedList::fileRead(QString fp)
{
    QFile file(fp);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while (!file.atEnd())
        {
            QByteArray line = file.readLine();
            QString str(line);
            qDebug() << Tool::handleData(str);
        }
        file.close();
      }
}
QString OrderedList::searchWord(QString ew)
{
    return "test";
}
