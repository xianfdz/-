/*���õݹ�ķ����������к�����ֵ��px(x,n)=x-x^2+x^3-x^4+��((-1)^n-1)(x^n)  n>0
����˼·��
1��
��Ϊpx(x,n-1)=x-x^2+x^3-x^4+��((-1)^n-2)(x^(n-1)) 
����px(x,n)=x-x^2+x^3-x^4+��+((-1)^n-2)(x^(n-1)) + ((-1)^n-1)(x^n) 
                  =px(x,n-1) + ((-1)^n-1)(x^n) 
2��px(x,n)=x-x^2+x^3-x^4+��((-1)^n-1)(x^n) 
                =x*(1-x+x^2-x^3-��((-1)^n-1)(x^(n-1)) 
                =x*(1-(x-x^2+x^3-x^4+��((-1)^n-2)(x^(n-1))))
                =x*(1-px(x,n-1))
**�����ʽҪ��"%lf%d" ��ʾ��Ϣ��"Enter X and N:"
**�����ʽҪ��"px=%f\n"
��������ʾ�����£�
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
double px(double x,int n)//����ǰn���
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

