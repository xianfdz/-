#include<stdio.h>
int main()
{
	int a=0;
	int b=(0==a);
	printf("%d\n",b);
	int c=-1;
	if(a=1)
	{
		c=(a&&b);
	}
	printf("%d%d%d",a,b,c);
	return 0;
}
//==���������������Ƿ���ȣ����Ϊ�� 
