#include <stdio.h>
void f(int *p);
void g(int k);
int main()
{
	int i=6;
	printf("%d\n",i);
	printf("%p\n",&i);
	f(&i);
	printf("%d\n",i);
	return 0;
}
void f(int *p)
{
	printf("%p\n",p);
	printf("%p\n",*p);
	*p=26;
}
void g(int k)
{
	printf("%d\n",k);
}
