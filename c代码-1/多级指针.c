#include <stdio.h>
int main()
{
	int a=5;
	int *q1,**q2,***q3,****q4;
	q1=&a;
	q2=&q1;
	q3=&q2;
	q4=&q3;
	printf("%p\n",&a);
	printf("%p\n",q1);
	printf("%p\n",&q1);
	printf("%p\n",q2);
	printf("%p\n",&q2);
	printf("%p\n",q3);
	printf("%p\n",&q3);
	printf("%p\n",q4);
	printf("%p\n\n",&q4);
	
	printf("%p\n",*q1);
	printf("%p\n",&*q1);
	printf("%p\n",*q2);
	printf("%p\n",&*q2);
	printf("%p\n",**q3);
	printf("%p\n",&**q3);
	printf("%p\n",***q4);
	printf("%p\n",&***q4);
	printf("%d\n\n",a);
 
	printf("%d\n",**q2);
	printf("%d\n",***q3);
	printf("%d\n",****q4);
	return 0;
}
