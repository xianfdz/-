#include <stdio.h>
int main()
{
	printf("Please enter a char:\n");
	char a;
	char b;
	scanf("%c",&a);
	if((a>=97)&&(a<=122))
	{
	b=a-32;
	printf("%c %d",b,a=a-32);
	}else if((a<=90)&&(a>=65)) 
		{
		b=a+32;
		printf("%c %d",b,a=a+32);	
		}
		else {
			printf("%c",a);
		}
		return 0;
}
