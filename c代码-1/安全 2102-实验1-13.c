#include<stdio.h>
int main(void)
{
	float original_amount,amount_with_tax;
	printf("Enter an amount:");
	scanf("%f",&original_amount);
	amount_with_tax=original_amount*1.05f;
	printf("With tax added:$%.2f\n",amount_with_tax);
	return 0;
}
