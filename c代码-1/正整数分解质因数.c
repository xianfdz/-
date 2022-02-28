#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	int i=2;
	for(i=2;i<n;i++)
	{
		while(n!=i)
		{
		if(n%i==0)
			{
				printf("%d*",i);
				n/=i;
			}else{
				break;
			}
	    }
	}
	printf("%d",n);
	return 0;
}
