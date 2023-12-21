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
//为什么尾指针不需要分配空间
    LinkNode * tail;  
//链表的长度
    int len;
}LinkList;

//链表初始化
int LinkListInit(LinkList **pList);

//链表头插
int LinkListHeadInsert(LinkList * pList,ELEMENTTYPE val);

//链表尾插
int LinkListTailInsert(LinkList * pList,ELEMENTTYPE val);

//指定位置插入
int LinkListAppiontPosInsert(LinkList * pList,int pos, ELEMENTTYPE val);

//链表头删
int LinkListHeadDel(LinkList * pList);

//链表尾删
int LinkListTailDel(LinkList * pList);

//链表指定位置删除
int LinkListAppointPos(LinkList * pList, int pos);

//链表删除指定的数据
int LinkListDelAppointData(LinkList * pList, ELEMENTTYPE val);

//获取链表的长度
int LinkListGetLength(LinkList * pList, int *pSize);

//链表的销毁
int LinkListDestroy(LinkList * pList);

//链表遍历接口
int LinkListForeach(LinkList * pList);

#endif 