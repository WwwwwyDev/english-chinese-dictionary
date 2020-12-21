# 程序设计报告

姓名：吴文益  班级：软件193  学号：2019082323

## 题目

设计实现一个小型英汉双解词典

## 代码及版本管理地址

[gitee码云版本地址(点击跳转)](https://gitee.com/wu_wen_yi/english-chinese-dictionary)

## Windows-release下载地址

[下载地址](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/dictrealse.rar)

## **问题描述**

设计一个英汉双解电子词典，支持查找、插入、删除等功能。

## **基本要求**

实现字典常用的数据结构包括有序表、AVL树、Patricia Tree（简称PAT tree，它是一棵压缩存储的二叉树结构）、散列表等，选一种数据结构，实现字典的基本操作，查找单词、插入单词（插入时，先查找，找不到则插入，找到则提示用户）、删除单词（删除时，先查找，找到则删除，找不到则提示用户）等。字典是按字母顺序排列的，不能用顺序查找，插入或删除单词后，要保持字典的有序性。

测试数据：任一英文单词。

## **考核要求**

（1）选用两种以上的数据结构实现字典的查找、插入、删除等操作，并比较不同实现算法的时间复杂度和空间复杂度。

（2）如果采用线性结构且无序，成绩为不及格。

（3）选择合适的数据结构，达到基本要求，成绩为优秀。

（4）鼓励设计图形用户界面。

提示：字典可以自己建立，但必须按字母a~z建立26个文件，建议从网上下载，文件类型为txt。

## 设计思路

查找、插入、删除操作分别采用三种不同的数据结构实现，界面采用QT框架写。

## 数据结构

采用有序表，散列表，Trie三种数据结构，测试数据量为7982个单词

### 复杂度分析

#### 有序表

##### 介绍

采用顺序表存储，空间复杂度为O(n)

##### 查找

对有序表查找采用二分查找，时间复杂度为O(logn)

##### 插入

插入单词使有序表仍然保持有序，时间复杂度O(n)

##### 删除

对顺序表删除，时间复杂度O(n)

#### 散列表

##### 介绍

采用djb2哈希函数进行数据分布，采用拉链法(双向链表)处理冲突，空间复杂度为O(n)

##### 查找

没有冲突时，时间复杂度O(1)；产生冲突时，对双链表查找的时间复杂度为O(n)

##### 插入

头插法，时间复杂度为O(1)

##### 删除

没有冲突时，时间复杂度O(1)；产生冲突时，对双链表删除的时间复杂度为O(n)

#### Trie树

介绍

又称前缀树或字典树，是一种有序树，用于保存关联数组，其中的键通常是字符串。与二叉查找树不同，键不是直接保存在节点中，而是由节点在树中的位置决定。一个节点的所有子孙都有相同的前缀，也就是这个节点对应的字符串，而根节点对应空字符串。一般情况下，不是所有的节点都有对应的值，只有叶子节点和部分内部节点所对应的键才有相关的值。假设字符的种数有m个，有若干个长度为n的字符串构成了一个Trie树，最坏空间复杂度:O(m^n)

##### 查找

时间复杂度为O(n)

##### 插入

时间复杂度为O(n)

##### 删除

先找到要删除的单词，然后修改数据域，时间复杂度为O(n)

### 函数介绍

| 函数申明                                                 | 参数                       | 返回值         | 功能介绍                       |
| -------------------------------------------------------- | -------------------------- | -------------- | ------------------------------ |
| `bool insertWord(const QString &ew, const QString &cm);` | 待添加的英语单词和中文释义 | 添加是否成功   | 插入单词                       |
| `bool deleteWord(const QString &ew);`                    | 待删除的英语单词           | 删除是否成功   | 删除单词                       |
| `QString searchWord(const QString &ew);`                 | 要查找的英语单词           | 找到的中文释义 | 查找英语单词并输出它的中文释义 |
| `void fileWrite(const QString &fp);`                     | 写入文件的路径             | NULL           | 将数据写入文件                 |
| `void fileRead(const QString &fp);`                      | 文件路径                   | NULL           | 从文件读取数据                 |
| `int getLength()`                                        | NULL                       | 单词数量       | 返回当前表单词数量             |

## 功能测试

#### 有序表

##### 查找

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/有序表查找.PNG)

##### 添加

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/有序表添加.PNG)

##### 删除

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/有序表删除.PNG)

#### 散列表

##### 查找

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/散列表查找.PNG)

##### 添加

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/散列表添加.PNG)

##### 删除

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/散列表删除.PNG)

#### Trie树

##### 查找

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/Trie%E6%A0%91%E6%9F%A5%E6%89%BE.PNG)

##### 添加

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/Trie%E6%A0%91%E6%B7%BB%E5%8A%A0.PNG)

##### 删除

![](https://gitee.com/wu_wen_yi/english-chinese-dictionary/raw/master/src/image/Trie%E6%A0%91%E5%88%A0%E9%99%A4.PNG)

## 总结

数据结构课程设计让我们从底层开始一步一步完善自己的数据结构，从中我收获了很多，同时也加深了对各种数据结构的认识。通过对数据结构的应用、对各种算法的优化和对bug的修复，我感受到了编程的乐趣，同时也提升了编码的能力。