/*口袋中有若干红、黄、蓝、白、黑5种颜色的球，每次从口袋中取出3个球，
定义如下指针数组，编程打印出得到3种不同颜色的球的所有可能取法。
按照红黄蓝白黑的顺序依次输出所有可能的解，不要输出重复的取法（组合情况相同但顺序不同视为相同的取法）。
char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
输入提示信息和数据格式：无
输出提示信息和数据格式："%d:%s,%s,%s\n"
请按如下框架编程：
*/ 
/*#include <stdio.h>
int main()
{
    char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
	int i,n=0,j,h;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			for(h=j+1;h<5;h++)
			{
				n++;
				printf("%d:%s,%s,%s\n",n,bColor[i],bColor[j],bColor[h]);
			}
		}
	} 
    return 0;
}*/
#include<stdio.h>
int main()
{
	 int a,b,c,m,sum;
	 int x=0;
	 printf("Input a sum:\n");
	 scanf("%d",&m);
	 for(a=1;a<=9;a++)
	 {
		  for(b=0;b<=9;b++)
		  {
			   for(c=0;c<=9;c++)
			   {
	
				    if(m==(2*b+2*a+c)+10*(a+a+2*c+b)+100*(2*b+2*c+a)) 
				    {
				           x=1;
				          sum=100*a+10*b+c;
				          
				    }  
			   }
		  }
	 }
   if(x==1) printf("The number is %d\n",sum);
	    else	printf("The sum you calculated is wrong!\n");
 	 return 0;
}
