#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<10;a++)
	{
		for(b=1;b<10;b++)
		{
			for(c=1;c<10;c++)
			{
				if(100*(a+c)+10*(a+b)+b+c==1200)
				{
					printf("a=%d,b=%d,c=%d",a,b,c);
				}
			}
		}
	}
	return 0; 
}

