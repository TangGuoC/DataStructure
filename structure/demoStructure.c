#include <stdio.h>
#include <string.h>
#includ <stdlib.h>



#define BUFFER_SIZE 16
#define DEFAULT_SIZE 2
//结构体
//什么叫结构体：将不同属性封装成一个类型
//结构体怎么定义
typrdrf struct stuInfo
{
    int age;
    int height;
    int weight;
    int name[BUFFER_SIZE];
    char sex;
    char *address;
    // char clothes;
    // char shoes;
    // char phones;
}stuInfo;
//结构体会默认进行字节对齐： 读取速度快（但是会浪费空间）
//结构体的[位域]到网络编程再深究
//什么叫变长结构体？
#if 0
//函数：结构体做函数
//值传递:不影响实参
int printStruct(stuInfo stu)
{
 //栈空间很小，只有8M   
    stu.age = 100;
    printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\n, stu.name:%s\n",stu.age, stu height, stu.sex, stu.weight, stu.name);
    return 0;
}
//#else

//传入参数：不要改变值
int printStruct(const stuInfo stu)
{
 //栈空间很小，只有8M
 //结构体必须用指针 省内存空间
    int ret = 0;
    int len = sizeof(stu);   
    printf("len :%d\n", len);
    //stu->age = 100;
    return 0;
    // printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\n, stu.name:%s\n",stu.age, stu height, stu.sex, stu.weight, stu.name);
    // return 0;
}
#endif 

//结构体做函数参数
    int printStructBuffer(stuInfo *stu, int stuSize)
    {
        for(int idx = 0; idx < stuSize; idx++)
        printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\n, stu.name:%s\n",stu.age, stu height, stu.sex, stu.weight, stu.name);
    }
    return 0;

int main()
{
    //怎么使用结构体
    stuInfo stu;
    memset(&stu, 0, sizeof(stu));
    stu.address = NULL;
#if 0

//结构体的大小
    int len = sizeof(stu);
    printf("len:%d\n", len);

//结构体数组
//数组：一快连续的地址，存放相同的数据类型
/*取别名：typedef*/
    struct buffer[DEFAULT_SIZE];
    buffer[0].age = 10;
    buffer[0].weight = 50;
    buffer[0].sex = 'm';
    buffer[0].height = 130;
    strncpy( buffer[0].name, "zhangsan", sizeof( buffer[0].name - 1));

    buffer[1].age = 20;
    buffer[1].weight = 50;
    buffer[1].sex = 'f';
    buffer[1].height = 160;
    strncpy( buffer[1].name, "wangwu", sizeof( buffer[0].name - 1));

#endif

#if 0
    stu.age = 10;
    stu.height = 50;
    stu.sex = 'm';
    stu.height = 170;
    strncpy(stu.name, "zhangsan", sizeof(stu.name) - 1);
    //stu.name = "zhangsan";

    printf("stu.age:%d\t, stu.height:%d\t, stu.sex:%c\t, stu.weight:%d\n, stu.name:%s\n",stu.age, stu height, stu.sex, stu.weight, stu.name);

#endif

#if 1
//结构体指针
    stu.age = 10;
    stu.height = 30;
    stu.sex = 'm';
    stu.height = 130;
    strncpy(stu.name, "zhangsan", sizeof(stu.name) - 1);
    stu.address = "china";

//结构体里的指针，一定要malloc
    stu.address =(char *)malloc(sizeof(char) *  BUFFER_SIZE);
    if(stu.address = NULL)
    {
        return NULL;
    }

    strcpy(stu.address, "china");

    printf("china:%p\n", china);
//回顾指针

    int a = 5;
    int *p = &a;

//结构体指针

    stuInfo * info = &stu;

//结构体指针 对数据 或写数据 都是用-> */

    info->age = 30;
    // printf("info->age:%d\n", info->age);
    // printf("stu.age:%d\n",  stu.age);
    printStruct(stu);
    printf("stu.age:%d\n",  stu.age);

#endif

#if 0

    struct buffer[DEFAULT_SIZE];
    buffer[0].age = 10;
    buffer[0].weight = 50;
    buffer[0].sex = 'm';
    buffer[0].height = 130;
    strncpy( buffer[0].name, "zhangsan", sizeof( buffer[0].name - 1));

    buffer[1].age = 20;
    buffer[1].weight = 50;
    buffer[1].sex = 'f';
    buffer[1].height = 160;
    strncpy( buffer[1].name, "wangwu", sizeof( buffer[0].name - 1));

    printStructBuffer(buffer, sizeof(buffer) / sizeof(buffer[0]));

#endif 

#if 1

struct buffer[DEFAULT_SIZE];
    buffer[0].age = 10;
    buffer[0].weight = 50;
    buffer[0].sex = 'm';
    buffer[0].height = 130;
    strncpy( buffer[0].name, "zhangsan", sizeof( buffer[0].name - 1));

    buffer[1].age = 20;
    buffer[1].weight = 50;
    buffer[1].sex = 'f';
    buffer[1].height = 160;
    strncpy( buffer[1].name, "wangwu", sizeof( buffer[0].name - 1));

    printStructBuffer(buffer, sizeof(buffer) / sizeof(buffer[0]));

#endif
    return 0;
}