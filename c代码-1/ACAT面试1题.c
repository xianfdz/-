#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=3;
	int k=4;
	k+=(k++)-(--i);
	printf("%d",k);
	return 0;
} 
//k+=(k++)-(--i)
//先k++指先赋值4，再k=k+1=5， 
//--i指先i=i-1=2，再赋值i-1=2 ,
// k+=4-2=2
//k=k+2=5+2=7.
