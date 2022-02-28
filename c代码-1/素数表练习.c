#include <stdio.h>
int main()
{
	
	const int maxnumber=10000;
	int number[maxnumber];
	int i,j,h;
	for(i=0;i<maxnumber;i++)
	{
		number[i]=1;
	}
	for(j=2;j<maxnumber;j++)
	{
		//if(number[j])
		//{
		
			for(i=2;i*j<maxnumber;i++)
			{
				number[i*j]=0;
			}
		//}
	}
	for(i=2;i<maxnumber;i++)
	{
	if(number[i]==1)
	{
		printf("%d\t",i);
	}
	}
	printf("\n");
}
