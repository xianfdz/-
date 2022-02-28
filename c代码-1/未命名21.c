#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4};
	printf("若定义int a[10]={1,2,3,4}，系统会为数组a分配的内存空间为%d个字节\n",sizeof(a));
	double d[][3]={1,2,3,4,5};
	printf("若定义double d[][3]={1,2,3,4,5}，系统会为数组d分配的内存空间为%d个字节\n",sizeof(d)); 
	return 0;
}
