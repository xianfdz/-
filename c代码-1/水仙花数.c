#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int first=1;
	while(i<n)
	{
		first*=10;
		i++;
	}
	i=first;
	while(i<first*10)
	{
		int t=i;
		int sum=0;
		while(t>0)
		{
		int y=t%10;
		t/=10;
		int p=1;
		int m=y;
			while(p<n)
			{
				m*=y;
				p++;	
			}
			sum+=m;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
		i++;	
	}
	return 0; 
}
	
	
	
	
	
	
