#include <stdio.h>
int main()
{
	int a=2,b=3,j;
	printf("%d\n",(a<<=a<b)?a+b:a-b);
	a=2;
	b=3;
	printf("%d\n",a<<=(a<b)?a+b:a-b);
	return 0;
}
