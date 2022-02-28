#include<stdio.h>
#include <stdlib.h>
int main()
{
	char a[][10]={"grsdqw","ewvvav","jbllgk","lksdnf","cnlken"};
	int i,j;
	char b[10];
	for(i=0;i<3;i++)
	{
		for(j=i;j<4;j++)
		{
			if(strcmp(*a,*a+1)>0)
			{
				*b=*a;
				*a=*(a+1);
				*(a+1)=*b;	
			}
			a=a+1;
		}
		a=a-4+i;	
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",*(a++));
	}
}
