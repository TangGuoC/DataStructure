#include <stdio.h>
#include "LinkList.h"
#include <string.h>

#define BUFFER_SIZE 20

typedef struct stuInfo
{
    int age;
    char sex;
} stuInfo;

int main()
{
#if 0
//strcpy第一个参数是传出参数 并返回值也是直线dst的地址
    char buffer[BUFFER_SIZE] = {0};
    char *ptr = strcpy(buffer, "zhangssan");
    printf("buffer:%s\n", buffer);
    printf("ptr:%s\n", ptr);
#endif

#if 0
    LinkList * list = NULL;
//初始化链表
    LinkListInit(&list);
//插入数据
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        LinkListHeadInsert(list, idx);
    }

//获取链表的长度
    int size = 0;
    LinkListGetLength(list, &size);
    printf("size:%d\n", size);


    LinkListForeach(list);
#else

    stuInfo stu1, stu2, stu3;
    memset(&stu1, 0, sizeof(stu1));
    memset(&stu2, 0, sizeof(stu2));
    memset(&stu3, 0, sizeof(stu3));

    stu1.age = 10;
    stu1.sex = 'm';

    stu2.age = 20;
    stu2.sex = 'f';

    stu3.age = 30;
    stu3.sex = 'm';
    //stuInfo buffer[DEFAULT_NUM] = {stu1, stu2, stu3};

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        LinkListHeadInsert(list, (void *)&buffer[idx]);
    }
    int size = 0;
    LinkListGetLength(list, &size);
    printf("size:%d\n", size);

    //遍历
    LinkListForeach(list);

#endif
    return 0;
}