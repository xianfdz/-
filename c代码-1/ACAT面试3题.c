#include<stdio.h>
int main(int argc,char const* argv[])
{
	int a=0,b=5;
	++a||++b,a-b;
	//printf("%d %d\n",a,b);
	b=b--;
	printf("%d %d\n",a,b);
	return 0;
}
