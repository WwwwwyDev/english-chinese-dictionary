#include "trietree.h"
TrieTree::TrieTree()
{
   this->root = new TreeNode;
   this->filePath = nullptr;
   this->length = 0;
}

TrieTree::TrieTree(const QString &fp)
{
    this->root = new TreeNode;
    this->filePath = fp;
    this->length = 0;
}

bool TrieTree::insertWord(const QString &ew, const QString &cm)
{
    TreeNode *currentNode = this->root;
    for (int i = 0; i < ew.length(); i++)
    {
        QChar t = ew.at(i);
        if (!currentNode->next[Tool::trieIndex(t)])
        {
            currentNode->next[Tool::trieIndex(t)] = new TreeNode;
        }
        currentNode = currentNode->next[Tool::trieIndex(t)];
    }
    if (currentNode->isExistence())
        return false;
    else
    {
        currentNode->setExistence(true);
        currentNode->setEnglishWord(ew);
        currentNode->setChineseMeaning(cm);
        return true;
    }
}


QString TrieTree::searchWord(const QString &ew)
{
     TreeNode *currentNode = this->root;
     for (int i = 0; i < ew.length(); i++)
     {
         QChar t = ew.at(i);
         if (Tool::trieIndex(t) == -1 || !currentNode->next[Tool::trieIndex(t)])
         {
             return "no find";
         }
         currentNode = currentNode->next[Tool::trieIndex(t)];
     }
     return currentNode->getChineseMeaning();
}

bool TrieTree::deleteWord(const QString &ew)
{
    TreeNode *currentNode = this->root;
    for (int i = 0; i < ew.length(); i++)
    {
        QChar t = ew.at(i);
        if (Tool::trieIndex(t) == -1 || !currentNode->next[Tool::trieIndex(t)])
        {
            return false;
        }
        currentNode = currentNode->next[Tool::trieIndex(t)];
    }
    currentNode->setExistence(false);
    currentNode->setEnglishWord("no find");
    currentNode->setChineseMeaning("no find");
    return true;
}
