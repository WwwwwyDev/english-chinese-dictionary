#ifndef HASHMAP_H
#define HASHMAP_H
#include <QString>
#include <QDebug>
/*
 * @auther:wwy
 * @date:2020/12/16
 * @introduction:链表的单个结点
 * @email:773323518@qq.com
 */
class ListNode2{
private:
    /*
     * @introduction:存放英语单词
     */
    QString englishWord;
    /*
     * @introduction:存放英语单词对应的中文释义
     */
    QString chineseMeaning;
public:
    /*
     * @introduction:指向下一个结点
     */
    ListNode2 *next;
    /*
     * @introduction:指向上一个结点
     */
    ListNode2 *pre;
    /*
     * @introduction:构造方法，初始化类变量
     * @pass:ew传入的英文单词，cm传入的中文释义
     * @return:NULL
     */
    ListNode2(QString ew, QString cm)
    {
        this->englishWord = ew;
        this->chineseMeaning = cm;
        this->next = nullptr;
        this->pre = nullptr;
    }
    /*
     * @introduction:无参构造方法，初始化类变量
     * @pass:NULL
     * @return:NULL
     */
    ListNode2()
    {
        this->englishWord = nullptr;
        this->chineseMeaning = nullptr;
        this->next = nullptr;
        this->pre = nullptr;
    }
    /*
     * @introduction:设置英语单词
     * @pass:ew传入英文单词
     * @return:NULL
     */
    void setEnglishWord(QString ew)
    {
        this->englishWord = ew;
    }
    /*
     * @introduction:得到当前结点的英文单词
     * @pass:NULL
     * @return:当前结点的英文单词
     */
    QString getEnglishWord()
    {
        return this->englishWord;
    }
    /*
     * @introduction:设置当前结点的中文释义
     * @pass:cm传入中文释义
     * @return:NULL
     */
    void setChineseMeaning(QString cm)
    {
        this->chineseMeaning = cm;
    }
    /*
     * @introduction:得到当前结点的中文释义
     * @pass:NULL
     * @return:当前结点的中文释义
     */
    QString getChineseMeaning()
    {
        return this->chineseMeaning;
    }

};
/*
 * @auther:wwy
 * @date:2020/12/16
 * @introduction:LinkedList双向链表查找插入删除,用于hashMap解决冲突
 * @email:773323518@qq.com
 */
class LinkedList
{
private:
    /*
     * @introduction:头指针
     */
    ListNode2 *head;
    /*
     * @introduction:链表长度
     */
    int lenth;
public:
    /*
     * @introduction:构造方法
     * @pass:NULL
     * @return:NULL
     */
    LinkedList();
    /*
     * @introduction:头插法
     * @pass:ew英语单词，cm中文释义
     * @return:是否添加成功
     */
    bool addToHead(const QString &ew, const QString &cm);
    /*
     * @introduction:查找单词
     * @pass:ew英语单词
     * @return:中文释义
     */
    QString searchWord(const QString &ew);
    /*
     * @introduction:删除单词
     * @pass:ew英语单词
     * @return:是否删除成功
     */
    bool deleteWord(const QString &ew);
    void lsDebug()
    {
        ListNode2 *p = head->next;
        while (p)
        {
            qDebug() << p->getEnglishWord() << " "<<p->getChineseMeaning();
            p = p->next;
        }
        qDebug() <<"end";
    }
    /*
     * @introduction:获取双链表长度
     * @pass:NULL
     * @return:双链表长度
     */
    int getLength()
    {
        return this->lenth;
    }
};

/*
 * @auther:wwy
 * @date:2020/12/16
 * @introduction:Hashlist哈希表(djb2),可以实现对字典的查找插入删除
 * @email:773323518@qq.com
 */
class HashMap
{
public:
    /*
     * @introduction:djb2哈希函数
     * @pass:ew为英语单词,mod为对hash值取余(防止溢出)
     * @return:取余后的哈希值;
     */
    int static djb2(const QString &ew,int mod);
};

#endif // HASHMAP_H
