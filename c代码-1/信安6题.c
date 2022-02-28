#include<stdio.h>
int main()
{
	int x,a;
	x=(a=4,5*3);//逗号运算符，先运算左边的式子，再运算右边的式子 
	printf("%d\n",x);
	x=a=4,5*3;
	printf("%d\n",x);
	return 0;
}
