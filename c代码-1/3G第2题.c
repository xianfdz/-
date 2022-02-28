#include <stdio.h>
#include <string.h>
int main()
{
	char b[]="Hello\0,3g\0";
	char* a=b;
	char c[255]={0};
	printf("strlen(b)=%d\n",strlen(b));
	printf("sizeof(b)=%d\n",sizeof(b));
	printf("strlen(a)=%d\n",strlen(a));
	printf("sizeof(a)=%d\n",sizeof(a));
	printf("strlen(c)=%d\n",strlen(c));
	printf("sizeof(c)=%d\n",sizeof(c));
	return 0;
} 
