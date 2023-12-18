#ifndef _DYNAMIC_ARRAY_H_
#define _DYNAMIC_ARRAY_H_

typedef int ELEMENTTYRE;

//避免头文件重复
typedef struct dynamicArray
{
    
    ELEMENTTYRE *data;  //数组的空间
    int len;    //数组的大小
    int capacity;   //数组的容量

} dynamicArray;

#endif //_DYNAMIC_ARRAY_H_