#ifndef TRIETREE_H
#define TRIETREE_H
#include <QString>
/*
 * @auther:wwy
 * @date:2020/12/17
 * @introduction:字典树的单个结点
 * @email:773323518@qq.com
 */
class TreeNode
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
    /*
     * @introduction:标记当前结点有无单词存在
     */
    bool existence;
public:
    /*
     * @introduction:双亲结点指针
     */
    TreeNode *parent;
    /*
     * @introduction:孩子结点指针
     */
    TreeNode *next[27];
    TreeNode()
    {
        this->englishWord = "no find";
        this->chineseMeaning = "no find";
        this->existence = false;
        this->parent = nullptr;
        for(int i = 0; i < 27; i++)
        {
            this->next[i] = nullptr;
        }
    }
    /*
     * @introduction:设置英语单词
     * @pass:ew传入英文单词
     * @return:NULL
     */
    void setEnglishWord(const QString &ew)
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
    void setChineseMeaning(const QString &cm)
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
    /*
     * @introduction:判断当前结点是否存在
     * @pass:NULL
     * @return:当前结点的存在情况
     */
    bool isExistence()
    {
        return this->existence;
    }
    /*
     * @introduction:设置当前结点的存在情况
     * @pass:当前结点的存在情况
     * @return:NULL
     */
    void setExistence(bool e)
    {
        this->existence = e;
    }
};
/*
 * @auther:wwy
 * @date:2020/12/17
 * @introduction:字典树数据结构
 * @email:773323518@qq.com
 */
class TrieTree
{
public:
    TrieTree();
};

#endif // TRIETREE_H
