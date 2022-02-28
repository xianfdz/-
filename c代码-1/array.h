#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *array;
	int size;
} Array;

Array array_create(int init_size);//创建一个数组 
void array_free(Array *a);//回收数组空间 
int array_size(const Array *a);// 告诉我们数组中有多少个单元可以用 
int* array_at(Array *a,int index);//访问数组中的单元 
int array_get(const Array *a,int index);
void aray_set(Array *a,int indes,int value);
void array_inflate(Array *a,int more_size);//核心：让数组长大 
#endif 
