#include <stdio.h>
int main()
{
	int i,n,j;
	char killer;
	char m[4]={'A','B','C','D'};
	for(i=0;i<4;i++)
	{
		killer=m[i];
		if(killer!='A') 
			n++;
		if(killer=='C')
			n++;
		if(killer=='D')
			n++;
		if(killer!='D')
			n++;
		if(n==3)
			break;
		n=0;
	}
	printf("killer=%c\n",killer);
	return 0;
}
