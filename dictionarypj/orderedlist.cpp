#include "orderedlist.h"
OrderedList::OrderedList()
{
    this->filePath = nullptr;
    this->length = 0;
}
OrderedList::OrderedList(QString fp)
{
    this->filePath = fp;
    this->length = 0;
}
void OrderedList::fileRead(QString fp)
{
    QFile file(fp);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        while (!file.atEnd())
        {
            QByteArray line = file.readLine();
            QString str = QString::fromLocal8Bit(line);
            QStringList strl = Tool::handleData(str);
            this->data[this->length].setEnglishWord(strl[0]);
            this->data[this->length].setChineseMeaning(strl[strl.length()-1]);
            for (int i = this->length; i >0; i--)   //插排O(n) ~ O(n^2) 由于原始数据接近有序，所以为O(n)
            {
                if (this->data[i].getEnglishWord().compare(this->data[i-1].getEnglishWord()) < 0)
                {
                    OrderedList::swapln(this->data[i],this->data[i-1]);
                }
                else break;
            }
            this->length ++;
        }
        file.close();
      }
}
void OrderedList::fileWrite(QString fp)
{
    QFile file(fp);
    if (file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QTextStream stream(&file);
        for (int i = 0; i < this->length; i++)
        {
            QString qs = data[i].getEnglishWord() + " " +data[i].getChineseMeaning();
            stream << qs << "\n";
        }
        file.close();
    }
}

QString OrderedList::searchWord(QString ew)
{
    ListNode res;
    int l = 0;
    int r = this->length - 1;
    while (l <= r) //二分查找O(logn)
    {
        int mid = (l + r) >>1;
        if(this->data[mid].getEnglishWord().compare(ew) >= 0)
        {
            res = this->data[mid];
            r = mid - 1;
        }
        else l = mid + 1;
    }
    if (res.getEnglishWord().compare(ew) == 0)
        return res.getChineseMeaning();
    else
        return "no find";
}

void OrderedList::swapln(ListNode &l1, ListNode &l2){
    QString tempew = l2.getEnglishWord();
    QString tempcm = l2.getChineseMeaning();
    l2.setEnglishWord(l1.getEnglishWord());
    l2.setChineseMeaning(l1.getChineseMeaning());
    l1.setEnglishWord(tempew);
    l2.setChineseMeaning(tempcm);
}
