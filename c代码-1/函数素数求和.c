

//输出 2~n之间所有素数，并求和，n由键盘输入。素数是只能被1和自身整除的整数。要求编写函数判断自然数x是否为素数，函数原型为：
//int IsPrime(unsigned int x); //x是素数返回1，不是素数返回0。
//输入提示信息："Please input n(n>1):"
//输入格式："%d"
//每个素数的输出格式："%d\n"
//求和输出格式："sum of prime numbers:%d"
#include <stdio.h>
int IsPrime(unsigned int x);
int main()
{
	int n,i;
	int sum=0;
	printf("Please input n(n>1):"); 
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(IsPrime(i))
		{
			printf("%d\n",i);
			sum+=i;
		}
	}
	printf("sum of prime numbers:%d",sum);
}
int IsPrime(unsigned int x)
{
	int i,m,cnt;
	i=2;
	if(x==2)
	{
		cnt=1;
	}else{
		do
		{
			m=x%i;
			i++;
		}while(m!=0&&i<x);
		if(m)
		{
			cnt=1;
		}else{
			cnt=0;
		}
		
	}
	return cnt;
}
