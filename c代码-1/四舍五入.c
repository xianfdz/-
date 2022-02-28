#include <stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	x=(int)(x*100+0.5)/100.0;
	printf("%lf",x);
}
