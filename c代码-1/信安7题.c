#include <stdio.h>
int main()
{
	int x[5]={1,2,3,4,5,};
	int*p=(int*)(&x+1);//&x指数组首地址，&x+1指数组整体的下一个地址，即x[6]的地址，已经越界了 
	printf("%d,%d",*(x+1),*(p-1));
	return 0;
}
