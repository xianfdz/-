#include<stdio.h>
void exchange(int number_a,int number_b);
int main()
{
	int a=2,b=5;
	exchange(a,b);
	printf("a=%d,b=%d",a,b);
	return 0;
} 
void exchange(int number_a,int number_b)
{
	int temp;
	temp=number_a;
	number_a=number_b;
	number_b=temp;
}
