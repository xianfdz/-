//Çó1+2!+3!+...+20!µÄºÍ
#include <stdio.h>
int leicheng(int m)
{
	int i,x=1;
	for(i=m+1;i>1;i--)
	{
		x*=i-1;
	}
	return x;
}
int main()
{
	int i,sum=0;
	for(i=1;i<=20;i++)
	{
		sum+=leicheng(i);
	}
	printf("%d",sum);
	return 0;
}
