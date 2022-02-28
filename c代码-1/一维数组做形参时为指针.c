#include <stdio.h>
void yu(int *a)
{
	a[1]=3;
}
int main()
{
	int a[2]={1,2};
	yu(a);
	printf("%d",a[1]);
	return 0;
}
