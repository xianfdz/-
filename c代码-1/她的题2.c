#include<stdio.h>
int main()
{
	char chars[]={'a',' ','b',' ','c',' ',' ','d'};
	char *p=chars;
	int i;
	printf("�滻�������Ϊ:");
	for(i=0;i<8;i++)
	{
		if(*p==' ') *p='_';
		printf("%c",*p);
		*p++;
	}
	return 0;
}
