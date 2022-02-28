#include <stdio.h>
int main()
{
	char *s="12134";
	int k=0,a=0;
	while(s[k+1])
	{
		k++;
		if(k%2==0)
		{
			a=a+(s[k]-'0'+1);
			continue;
		} 
		a=a+(s[k]-'0');
	}
	printf("k=%d a=%d\n",k,a);
}
