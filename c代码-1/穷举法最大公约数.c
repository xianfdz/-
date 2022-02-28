/*按如下函数原型，采用穷举法编写计算最大公约数的函数Gcd()
，在主函数中调用该函数计算并输出从键盘任意输入的两整数的最大公约数。
穷举法的基本思想是：先找到a和b中的较小者t，然后从t开始逐次减1尝试每种可能，
即检验t到1之间的所有整数，第一个满足公约数条件的t，就是a和b的最大公约数。
/* 函数功能：计算a和b的最大公约数，输入负数时返回-1 */
/*int Gcd(int a, int b)
要求如下：
（1）从键盘任意输入的两整数
     主函数调用Gcd()函数，并输出两整数的最大公约数。
（2）Gcd函数原型为：
     int Gcd(int a, int b);
     如果输入的数不是正整数，则返回-1，否则，返回两个数的最大公约数。
（3）**输入提示信息格式要求："Inpu4t a,b:"
       输入格式："%d,%d"
     **输出提示信息要求：
     如果输入的数不是正整数，则输出"Input number should be positive!\n"，否则按如下格式输出"Greatest Common Divisor of %d and %d is %d\n"*/
#include<stdio.h>
int Gcd(int a,int b)
{
	int t;
	if(a>0&&b>0)
	{
		if(a>b) t=b;
		else t=a;
		for( ;t>=1;t--)
		{
			if(a%t==0&&b%t==0) break;
		}
	}else t=-1;
	
	return t;
}
int main()
{
	int a,b,m;
	printf("Input a,b:\n");
	scanf("%d %d",&a,&b);
	m=Gcd(a,b);
	if(m==-1) printf("Input number should be positive!\n");
	else printf("Greatest Common Divisor of %d and %d is %d\n",a,b,m);
	return 0;
}

