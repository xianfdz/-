#include <stdio.h>
void swap(int *pa,int *pb); 
int main()
{
	int a=2;
	int b=3;
	swap(&a,&b);
	printf("%d %d",a,b);
}
void swap(int *pa,int *pb)
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
	
}
