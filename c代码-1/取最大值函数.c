#include <stdio.h>
int max (int a,int b)
{
	int cet;
	if(a>b)
	{
		cet=a;
	}else{
		cet=b;
	}
	return cet;
}
int main()
{
	int a=5;
	int b=7;
	int c;
	c=max(a,b); 
	printf("%d\n",c);
	c=max(12,34);
	printf("%d\n",c); 
}
