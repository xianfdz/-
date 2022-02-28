#include <stdio.h>
int main()
{
	char a;
	scanf ("%c",&a);
	if ((a>=65)&&(a<=90))
	{
		printf("%d",a=a-64); 
	}else if((a>=97)&&(a<=122))
		{
			printf("%d",a=a-96); 
		}
  return 0;
}
