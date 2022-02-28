#include <stdio.h>
int main()
{
	int i,n,j,p;
	printf("一行输入1个整数怕，20<p<150\n");
	scanf("%d",&p);
	int cnt=0;
	int sum=0;
	printf("第p个质数到第p+10个质数之和\n");
	for(n=2;n<=1000;n++)
	{
		int x=1;
		for(j=2;j<n;j++)
		{
			if(n%j==0)
			{
				x=0;
				break;
			}
		}
		if(x)
		{
			cnt++;
			if(cnt>=p&&cnt<=p+10) sum+=n;	
		}
	}
	
	printf("%d",sum); 
	return 0;
}
