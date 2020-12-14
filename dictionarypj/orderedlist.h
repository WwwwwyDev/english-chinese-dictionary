#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H
#include <QFile>
#include <QDebug>

/*
 * @auther:wwy
 * @date:2020/12/14
 * @introduction:OrderedList的单个结点，用于封装单词和对应的中文释义
 * @email:773323518@qq.com
 */
class ListNode
{
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
     * @introduction:构造方法，初始化类变量
     * @pass:ew传入的英文单词，cm传入的中文释义
     * @return:NULL
     */
    ListNode(QString ew, QString cm)
    {
        this->englishWord = ew;
        this->chineseMeaning = cm;
    }
    /*
     * @introduction:无参构造方法，初始化类变量
     * @pass:NULL
     * @return:NULL
     */
    ListNode()
    {
        this->englishWord = nullptr;
        this->chineseMeaning = nullptr;
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
 * @date:2020/12/14
 * @introduction:OrderedList有序表,可以实现对字典的查找插入删除
 * @email:773323518@qq.com
 */
class OrderedList
{
private:
    /*
     * @introduction:存放单词数据
     */
    ListNode data[2000];
    /*
     * @introduction:存放文件路径
     */
    QString filePath;
public:
    /*
     * @introduction:构造方法
     * @pass:fn读取文件的路径
     * @return:NULL
     */
    OrderedList(QString fp);
    /*
     * @introduction:读取文件数据到data数组
     * @pass:fn读取文件的路径
     * @return:NULL
     */
    void fileRead(QString fp);
    /*
     * @introduction:查找英语单词并输出它的中文释义
     * @pass:ew要查找的英语单词
     * @return:找到的中文释义
     */
    QString searchWord(QString ew);

};

#endif // ORDEREDLIST_H
