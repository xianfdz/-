#include<stdio.h>
int main()
{
	while(1)
	{
		int n,num,size=1;
		scanf("%d",&num);
		getchar();
		n=num;
		while(n!=0)
		{
			n=n/2;
			size*=2;
		}
		num^=(size-1);
		printf("%d\n",num);
	}
	return 0;
}
