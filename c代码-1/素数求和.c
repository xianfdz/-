#include <stdio.h>
int main()
{
	int i,n,j,p;
	printf("һ������1�������£�20<p<150\n");
	scanf("%d",&p);
	int cnt=0;
	int sum=0;
	printf("��p����������p+10������֮��\n");
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
