#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=3;
	int k=4;
	k+=(k++)-(--i);
	printf("%d",k);
	return 0;
} 
//k+=(k++)-(--i)
//��k++ָ�ȸ�ֵ4����k=k+1=5�� 
//--iָ��i=i-1=2���ٸ�ֵi-1=2 ,
// k+=4-2=2
//k=k+2=5+2=7.
