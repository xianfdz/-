#include <stdio.h>
#include <math.h>
#include  <stdlib.h>
int main()

{
	printf("Please enter the coefficients a,b,c:");
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);	
	float p,q,m;
	m=b*b-4*a*c;
	p=-b/(2*a);
	q=sqrt(fabs(b*b-4*a*a))/(2*a);
	if(a!=1e-6)
	{
		if(m==1e-6)
		{
			printf("x1=x2=%.2f\n",p);
		}else {
		if(m>1e-6)
		{
			printf("x1=%0.2f,x2=%0.2f\n",p+q,p-q);
		}
		if(m<1e-6)
		{
			printf("x1=%0.2f+%0.2fi ",p,q);
			printf("x2=%0.2f-%0.2fi\n",p,q);
		}
		}
	}else if(a==1e-6){
	printf("It is not a quadratic equation!\n");
}
	return 0;
}

