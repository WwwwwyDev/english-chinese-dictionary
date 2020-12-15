#include "hashlist.h"



int Hashlist::djb2(QString ew,int mod)
{
    int hash = 5381;
    for (int i = 0; i < ew.length(); i++)
    {
        hash = (((hash << 5) + hash) + ew.at(i).unicode()) % mod;
    }
    return hash % mod;
}
