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

//API：


//动态数组的初始化
int dynamicArray();

//动态数组插入数据（默认插到数组的末尾）
int dynamicArrayInserData();

//动态数组插入数据（在指定位置插入）
int dynamicArrayAppoinPosInsertData();

//动态数组修改指定为指定的数据
int dynamicArrayModifyAppointPosData();

//动态数组删除数据(默认情况下删除末尾的数据)
int dynamicArrayDeleteData();

//动态数组删除指定位置数据
int dynamicArrayDeleteAppointPosData();

//动态数组的销毁
int dynamicArrayDestory();

//获取数组的大小
int dynamicArrayGetSize();

//获取数组的容量
int dynamicArrayGetCapacity();

#endif //_DYNAMIC_ARRAY_H_