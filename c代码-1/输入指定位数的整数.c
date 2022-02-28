#include <stdio.h>
int main()
{
	int x,i,j,h,cnt;
	cnt=0;
	scanf("%d",&x);
	for(i=x;i<=x+3;i++)
	{
		for(j=x;j<=x+3;j++)
		{
			for(h=x;h<=x+3;h++)
			{
				if(i!=j&&i!=h&&j!=h)
				{
					cnt++;
					printf("%d%d%d",i,j,h);
					if(cnt%6==0)
					{
						printf("\n");
					}
					if(cnt%6!=0)
					{
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
} 
