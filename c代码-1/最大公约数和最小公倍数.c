#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int z=x;
	int t;
	int i=y;
	while(x!=0)
	{
		t=x%y;
		x=y;
		y=t;
	}
	printf("%d %d",x,i*z/x);
	
}
