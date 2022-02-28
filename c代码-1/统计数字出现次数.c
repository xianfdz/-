#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i;
	int cnt[10];
	for(i=0;i<10;i++)
	{
		cnt[i]=0; 
	}
	while(x!=-1)
	{
		if(x>=0&&x<=9)
		{
			cnt[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<=10;i++)
	{
		printf("%d:%d",i,cnt[i]);
	}
	return 0;
} 
