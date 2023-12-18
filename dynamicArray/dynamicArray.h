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
int dynamicArray(dynamicArray *pArray);

//动态数组插入数据（默认插到数组的末尾）
int dynamicArrayInserData(dynamicArray *pArray, ELEMENTTYRE val);

//动态数组插入数据（在指定位置插入）
int dynamicArrayAppoinPosInsertData(dynamicArray *pArray, int pos, ELEMENTTYRE val);

//动态数组修改指定为指定的数据
int dynamicArrayModifyAppointPosData(dynamicArray *pArray, int pos, ELEMENTTYRE val);

//动态数组删除数据(默认情况下删除末尾的数据)
int dynamicArrayDeleteData(dynamicArray *pArray);

//动态数组删除指定位置数据
int dynamicArrayDeleteAppointPosData(dynamicArray *pArray, int pos, ELEMENTTYRE val);

//动态数组的销毁
int dynamicArrayDestory(dynamicArray *pArray, int pos);

//获取数组的大小
int dynamicArrayGetSize(dynamicArray *pArray, int *pSize);

//获取数组的容量
int dynamicArrayGetCapacity(dynamicArray *pArray, int *pCapacity);

#endif //_DYNAMIC_ARRAY_H_