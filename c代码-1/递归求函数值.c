/*请用递归的方法计算下列函数的值：px(x,n)=x-x^2+x^3-x^4+…((-1)^n-1)(x^n)  n>0
两种思路：
1）
因为px(x,n-1)=x-x^2+x^3-x^4+…((-1)^n-2)(x^(n-1)) 
所以px(x,n)=x-x^2+x^3-x^4+…+((-1)^n-2)(x^(n-1)) + ((-1)^n-1)(x^n) 
                  =px(x,n-1) + ((-1)^n-1)(x^n) 
2）px(x,n)=x-x^2+x^3-x^4+…((-1)^n-1)(x^n) 
                =x*(1-x+x^2-x^3-…((-1)^n-1)(x^(n-1)) 
                =x*(1-(x-x^2+x^3-x^4+…((-1)^n-2)(x^(n-1))))
                =x*(1-px(x,n-1))
**输入格式要求："%lf%d" 提示信息："Enter X and N:"
**输出格式要求："px=%f\n"
程序运行示例如下：
Enter X and N:4 6
px=-3276.000000
*/
/*#include <stdio.h>
#include <math.h>
double px(double x,int n);
int main()
{
	double x,t;
	int n;
	printf("Enter X and N:\n");
	scanf("%lf %d",&x,&n);
	printf("px=%f\n",px(x,n));
}
double px(double x,int n)
{
	double sum;
	while(n=2)
	{
		sum==x*(1-px(x,n-1));
	}
	return sum;
}*/

#include <stdio.h>
#include <math.h>

double px(double x,int n);
int main ()
{
  printf("Enter X and N:");
  double x;
  int n;
  scanf("%lf%d",&x,&n);
  printf("px=%lf\n",px(x, n));
    
}
double px(double x,int n)//计算前n项和
{
     if(n == 1)
     {
         return x;
         
     }
     else
     {
         return x*(1-px(x,n-1));
         
     }
}

