#include <stdio.h>
int main()
{
	int x,y,z;
	printf("输入三个数x,y,z:\n");
	scanf("%d %d %d",&x,&y,&z);
	if(x>=y&&x>=z)
	{
		printf("最大数为%d",x); 
	}else if(y>=x&&y>=z)
	{
		printf("最大数为%d",y);
	}else if(z>=x&&z>=y)
	{
		printf("最大数为%d",z);
	}
	return 0;
	
}
