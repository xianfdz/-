#include<stdio.h>
int main()
{
	int x=3;
	int y=1 || (x=1)&&(x++);
	printf("x=%d y=%d",x,y);
	return 0;
}
