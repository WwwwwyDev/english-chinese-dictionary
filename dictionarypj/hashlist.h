#ifndef HASHLIST_H
#define HASHLIST_H
#include <QString>
/*
 * @auther:wwy
 * @date:2020/12/15
 * @introduction:Hashlist哈希表(djb2),可以实现对字典的查找插入删除
 * @email:773323518@qq.com
 */
class Hashlist
{
public:
    /*
     * @introduction:djb2哈希函数
     * @pass:ew为英语单词,mod为对hash值取余(防止溢出)
     * @return:取余后的哈希值;
     */
    int static djb2(QString ew,int mod);
};

#endif // HASHLIST_H
