#include<stdio.h>
int main()
{
	int n='c';
	switch(n++)
	{
		default :
			printf("do");
			break;
		case 'b':
		case 'B':
		case 'e':
		case 'E':
			printf("it");
			break;
		case 'c':
		case 'C':
			printf("just");
		case 'd':
		case 'D':
			printf("great");
	}
	return 0;
}
