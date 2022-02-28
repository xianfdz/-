#include <stdio.h>
int main()
{
	int i;
	int *b[3]={6,2,3,};
	int *q1,**q2,***q3,****q4;
	for(i=0;i<3;i++)
	{
	b[i];
		q2=&b[i];
		q3=&q2;
		q4=&q3;
		printf("%p\n",&b[i]);
	//	printf("%p\n",q1);
	//	printf("%p\n",&q1);
		printf("%p\n",q2);
		printf("%p\n",&q2);
		printf("%p\n",q3);
		printf("%p\n",&q3);
		printf("%p\n",q4);
		printf("%p\n",&q4);
		printf("%d\n",b[i]);
		printf("%d\n",*q1);
		printf("%d\n",*q2);
		printf("%d\n",*q3);
		printf("%d\n",*q4);
		printf("%d\n",**q2);
		printf("%d\n",***q3);
		printf("%d\n",****q4);
	}
	return 0;
}
