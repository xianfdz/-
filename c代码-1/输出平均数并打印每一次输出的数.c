#include <stdio.h>
int main()
{
	double sum=0;
	int cnt=0;
	int x;
	int number[100];
	scanf("%d",&x);
	for(cnt=0;cnt<99;cnt++)
	{
		number[cnt]=0;
	}
	while(x!=-1)
	{
		number[cnt]=x;
		cnt++;
		sum+=x;
		scanf("%d",&x);	
	}
	if(cnt>0)
	{
		int i;
		double average=sum/cnt;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>average)
			{
			printf("%d ",number[i]);
			}
		}
	}
	return 0;
}
