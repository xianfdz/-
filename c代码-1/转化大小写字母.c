#include <stdio.h>
int main()
{
	char a,b;
    int t;
	printf("Enter a capital letter:\n");
	a=getchar();
    b=a-32;
    t=b;
	printf("%c,%d\n",b,t);
	return 0;
}
