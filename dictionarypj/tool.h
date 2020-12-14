#ifndef TOOL_H
#define TOOL_H
#include <QString>
#include <QStringList>
#include <QDebug>
/*
 * @auther:wwy
 * @date:2020/12/14
 * @introduction:Tool类内为本项目常用工具函数
 * @email:773323518@qq.com
 */

class Tool
{
public:
    /*
     * @introduction:将数据分割
     * @pass:data传入的数据
     * @return:数据处理后的列表
     */
    QStringList static handleData(QString data);

};

#endif // TOOL_H
