#include <stdio.h>
int main()
{
	int x,y,z;
	printf("����������x,y,z:\n");
	scanf("%d %d %d",&x,&y,&z);
	if(x>=y&&x>=z)
	{
		printf("�����Ϊ%d",x); 
	}else if(y>=x&&y>=z)
	{
		printf("�����Ϊ%d",y);
	}else if(z>=x&&z>=y)
	{
		printf("�����Ϊ%d",z);
	}
	return 0;
	
}
