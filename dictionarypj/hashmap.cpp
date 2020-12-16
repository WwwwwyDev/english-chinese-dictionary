#include "hashmap.h"
LinkedList::LinkedList()
{
    this->head = new ListNode2();
    this->lenth = 0;
}

bool LinkedList::addToHead(const QString &ew, const QString &cm)
{
    ListNode2 *p = head->next;
    while (p)
    {
        if (p->getEnglishWord().compare(ew) == 0)
        {
            return false;
        }
        p = p->next;
    }
    ListNode2 *now = new ListNode2(ew, cm);
    ListNode2 *temp = head->next;
    if (temp)
    {
        temp->pre = now;
        now->next = temp;
    }
    head->next = now;
    now->pre = head;
    this->lenth++;
    return true;
}

QString LinkedList::searchWord(const QString &ew)
{
    ListNode2 *p = this->head->next;
    while (p)
    {
        if (p->getEnglishWord().compare(ew) == 0)
        {
            return p->getChineseMeaning();
        }
        p = p->next;
    }
    return "no find";
}

bool LinkedList::deleteWord(const QString &ew)
{
    ListNode2 *p = head->next;
    while (p)
    {
        if (p->getEnglishWord().compare(ew) == 0)
        {
            p->pre->next = p->next;
            p->next->pre = p->pre;
            delete p;
            this->lenth --;
            return true;
        }
        p = p->next;
    }
    return false;
}


int HashMap::djb2(const QString &ew,int mod)
{
    int hash = 5381;
    for (int i = 0; i < ew.length(); i++)
    {
        hash = (((hash << 5) + hash) + ew.at(i).unicode()) % mod;
    }
    return hash % mod;
}
