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
	printf("������������\n");
	scanf("%d %d",&a,&b);
	printf("���������������Լ����%d",Gcd(a,b));
	return 0;
}
