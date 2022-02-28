#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5,};
	int *p=a;
	*(p+2)++;
//	printf("%d",b);
	return 0;
}
