#include <stdio.h>
int divide(int a,int b,int *result);
int main()
{
	int x;
	int y;
	scanf("%d %d",&x,&y);
	int shang;
	divide(x,y,&shang);
	if(divide(x,y,&shang))
	{
	printf("%d",shang);
	}
}
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0)
	{
		ret=0;
	}else {
		*result=a/b;
	}
		return ret;
}
