#include <stdio.h>
int main()
{
	int a[10]={1,2,3,4};
	printf("������int a[10]={1,2,3,4}��ϵͳ��Ϊ����a������ڴ�ռ�Ϊ%d���ֽ�\n",sizeof(a));
	double d[][3]={1,2,3,4,5};
	printf("������double d[][3]={1,2,3,4,5}��ϵͳ��Ϊ����d������ڴ�ռ�Ϊ%d���ֽ�\n",sizeof(d)); 
	return 0;
}
