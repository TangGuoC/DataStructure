#ifndef __LINKLIST_H_
#define __LINKLIST_H_

#define ELEMENTTYPE int

//链表节点取别名
typedef struct LinkNode
{
    ELEMENTTYPE data;

//指向一个节点的指针
    struct LinkNode *ptr; //指针的类型为什么是节点
}LinkNode;


//链表
typedef srtuct LinkList;
{
//链表的虚拟头节点
    LinkNode * head;
//链表的长度
    int len;
}LinkList;

//链表初始化
int LinkListInit();

//链表头插
int LinkListHeadInsert();

//链表尾插
int LinkListTailInsert();

//指定位置插入
int LinkListAppiontPosInsert();

//链表头删
int LinkListHeadDel();

//链表尾删
int LinkListTailDel();

//链表指定位置删除
int LinkListAppointPos();

//链表删除指定的数据
int LinkListDelAppointData();

//获取链表的长度
int LinkListGetLength();

//链表的销毁
int LinkListDestroy();

#endif 