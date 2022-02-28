#include <stdio.h>
int main()
{
	int n;
	while(n>0)
	{
	printf("Please enter n:");
	scanf("%d",&n);
    if(n>0)
	{
	printf("n = %d\n",n);
	}
		else if(n<0)
		{
		printf("Program is over!\n");
		break;
		}
	}
	return 0;
}
