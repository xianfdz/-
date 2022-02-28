#include <stdio.h>
int main()
{
	int x,y,z,t;
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	if(x>z)
	{
		t=z;
		z=x;
		x=t;
	}
	if(y>z)
	{
		t=z;
		z=y;
		y=t;
	}
	printf("%d %d %d",x,y,z);
	return 0; 
}
