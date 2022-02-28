#include <stdio.h>
int main()
{
	int x=1500;
	double y;
	double a;
	scanf("%lf",&a);
	if(a<=10000)
	{
		y=x+a*0.05;
	} if(a>10000&&x<50000){
		y=x+10000*0.05+(a-10000)*0.03;
	} if(a>50000){
		y=x+10000*0.05+40000*0.03+(a-50000)*0.02;
	}
	printf("%d",(int)y);
	return 0;
} 
