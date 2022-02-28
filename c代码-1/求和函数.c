#include <stdio.h>
void sum(int begin,int end);//声明 
int main()
{
	sum(3,4);
	sum(34,45);
	sum(2,10);//值 
	return 0;
}
void sum(int begin,int end)//定义 begin和end为参数 
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d到%d的和为%d\n",begin,end,sum);
}
