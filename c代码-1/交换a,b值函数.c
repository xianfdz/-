#include <stdio.h>
void swap(int a,int b);
int main()
{
	int x=3;
	int y=4;
	swap(x,y);
	return 0;
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("%d,%d",a,b);
}
