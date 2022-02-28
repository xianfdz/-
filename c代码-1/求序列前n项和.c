#include <stdio.h>
int main()
{
	int n;
	int i;
	double dividend=2.0;
	double divisor=1.0;
	double sum=0.0;
	double t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=dividend/divisor;
		t=dividend;
		dividend=t+divisor;
		divisor=t;
	}
	printf("%0.2f",sum);
	return 0;
}
