/*回文素数
所谓回文素数是指对一个素数n，从左到右和从右到左读是相同的，
这样的数就称为回文素数，例如11，101，313等。
编程计算并输出不超过n（100<=n<=1000）的回文素数，
并统计这些回文素数的个数，其中n的值从键盘输入。

程序运行示例1
Input n:
100↙
  11
count=1

程序运行示例2
Input n:
1000↙
  11 101 131 151 181 191 313 353 373 383 727 757 787 797 919 929
count=16

输入格式:"%d"
输出格式：
输入提示信息："Input n:\n"
输出格式："%4d"
          "\ncount=%d\n*/
#include<stdio.h>
int main()
{
	int n,count=0,i,su=1,j,hui=0,x,y;
	printf("Input n:\n");
	scanf("%d",&n);
	for(i=11;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				su=0;
				break;
			}else su=1;
		}
		if(i<100){
			x=i/10;
			y=i%10;
			if(x==y) hui=1;
			else hui=0;
		}else {
			x=i/100;
			y=i%10;
			if(x==y) hui=1;
			else hui=0;
		}
		if(su==1&&hui==1) {
			printf("%4d",i);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}
