//斐波纳切数列：兔子问题:一对兔子从第三个月开始每月生一对小兔子，每对小兔子从第三个月开始也每月生一对小兔子，请列出40个月，每月的兔子数
#include<stdio.h>
#define month 40
int main()
{
	int i,num[month];
	for(i=0;i<month;i++)
	{
		num[i]=0;
	}

	for(i=1;i<=40;i++)
	{
		if(i==1||i==2)
		{
			num[i]=2;
		}		
		
		if(i>=3)
		{
			num[i]=num[i-1]+num[i-2];
		}

	}
	printf("\t月份\t兔子数\n");
	for(i=1;i<=40;i++)
	{
		printf("\t%d\t%d\n",i,num[i]);

	}

	return 0;
}
