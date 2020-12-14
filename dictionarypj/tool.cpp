#include "tool.h"

QStringList Tool::handleData(QString data)
{   if (data.at(data.length()-1) == '\n')
    {
        data.chop(1);
    }
    return data.split(" ");
}

