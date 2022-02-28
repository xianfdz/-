#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a;
	a=(int*)malloc(8*sizeof(int));
	int i;
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=7;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	free(a);
	return 0;
}
