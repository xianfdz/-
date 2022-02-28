#include <stdio.h>
int max(int a,int b)
{
	return a?a:b;
}
int main()
{
	int a=5,b=6;
	printf("%d",max(a,b));
}
