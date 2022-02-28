#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,first=1;
	int cnt;
	for(i=1;i<n;i++)
	{
		first*=10;
	}
	for(i=first;i<first*10;i++)
	{
		int sum=0;
		int j,k;
		int d=i;
		int c;
		do
		{
			int a,b,f;
			c=d%10;
		    b=c;
			for(k=1;k<n;k++)
			{
				b*=c;	
			}
			sum+=b;
			d=d/10;
		}while(c>0);
		if(i==sum)
		{
			printf("%d ",i);
			cnt++;
		}
	}
	if(cnt%3==0)
	{
		printf("\n");
	} 
}
