#include<stdio.h>
int main()
{
	int x,a;
	x=(a=4,5*3);//�������������������ߵ�ʽ�ӣ��������ұߵ�ʽ�� 
	printf("%d\n",x);
	x=a=4,5*3;
	printf("%d\n",x);
	return 0;
}
