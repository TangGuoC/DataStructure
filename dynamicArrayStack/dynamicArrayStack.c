#include "dynamicArrayStack.h"
#include <stdio.h>
#include "common.h"

#define DEFALUT_SIZE 10

/*初始化*/
int dynamicArrayStackInit(dynamicArrayStack *pStack)
{
    return dynamicArrayInit(pStack, DEFALUT_SIZE);
}

/*压栈*/
int dynamicArrayStackPush(dynamicArrayStack *pStack, ELEMENTTYPE val)
{
    /*调用动态数组的尾插*/
    return dynamicArrayInsertData(pStack, val);
}

/*查看栈顶元素*/
int dynamicArrayStackTop(dynamicArrayStack *pStack, ELEMENTTYPE *pval)
{
    /*获取指定位置的元素（数组最后的位置）*/
    return dynamicArrayGetAppointPosVal(pStack, pStack->len - 1, pval);
}

/*出栈*/
int dynamicArrayStackPop(dynamicArrayStack *pStack)
{
    return dynamicArrayDelelteData(pStack);
}

/*栈是否为空*/
int dynamicArrayStackIsEmpty(dynamicArrayStack *pStack)
{
    int size = 0;
    size = dynamicArrayGetSize(pStack, &Size); 
    return size == 0 ? 1 : 0;  
}

/*获得栈的大小*/
int dynamicArrayStackGitSize(dynamicArrayStack *pStack, int *pSize)
{
#if 1
    return dynamicArrayGetSize(pStack, pSize);
#else
    dynamicArrayGetSize(pStack, pSize);
    if(pSize)
    {
        return *pSize
    }
#endif     
}

/*栈的销毁*/
int dynamicArrayStackPop(dynamicArrayStack *pStack);
{
    return dynamicArrayDestroy(pStack);
}