#include <stdio.h>
int main()
{
	int x,y,z,a;
	scanf("%d",&x);
	y=x%10;
	z=x/100;
	a=(x-z*100)/10;
	printf("%d %d %d",y,a,z);
	return 0;
}
