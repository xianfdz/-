#include <stdio.h>
int main()
{
	int a[3][4];
	int i,t,n1,n2,k;
	a[1][2]=4;
	//printf("a[%d][%d]=%d",n1,n2,k);
	printf("%d",*(*a+6));
	return 0;
}
