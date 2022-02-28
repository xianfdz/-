#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *array;
	int size;
} Array;

Array array_create(int init_size);//����һ������ 
void array_free(Array *a);//��������ռ� 
int array_size(const Array *a);// ���������������ж��ٸ���Ԫ������ 
int* array_at(Array *a,int index);//���������еĵ�Ԫ 
int array_get(const Array *a,int index);
void aray_set(Array *a,int indes,int value);
void array_inflate(Array *a,int more_size);//���ģ������鳤�� 
#endif 
