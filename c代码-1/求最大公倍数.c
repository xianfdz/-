#include <stdio.h>
int Gcd(int a,int b)
{
	if(a==b) return a;
	else if(a>b) Gcd(a-b,b);
	else Gcd(a,b-a);
}
int main()
{
	int a,b;
	printf("输入两个整数\n");
	scanf("%d %d",&a,&b);
	printf("这两个整数的最大公约数是%d",Gcd(a,b));
	return 0;
}
