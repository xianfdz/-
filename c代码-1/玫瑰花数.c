

//如果一个n位正整数等于它的n个数字的n次方和，则称该数为n位自方幂数。四位自方幂数称为玫瑰花数。编程计算并输出所有的玫瑰花数。
//输出格式："%d\t"
#include<stdio.h>
int main()
{
	int n,i,j,x,y,z;
	for(i=1000;i<=9999;i++)
	{
		x=i/1000;
		y=i/100%10;
		z=i/10%10;
		n=i%10; 
		if(i==x*x*x*x+y*y*y*y+z*z*z*z+n*n*n*n)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}


