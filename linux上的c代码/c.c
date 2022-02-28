#include <stdio.h>
int main()
{
	int i,j,k,n=0,num[1000]={0};
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
				if(i!=j&&i!=k&&j!=k)
				{
					n++;
					num[n-1]=i*100+j*10+k;
				}
			}
		}
	}

	printf("一共可以组成%d个不同的且无重复数字的三位数",n);
	printf("它们分别是:\n");

	for(i=0;i<n;i++)
	{
		printf("%d ",num[i]);
		if((i+1)%5==0)
		{
			printf("\n");
		}

	}

	printf("\n");

	return 0;

}
