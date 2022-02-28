//利用求阶乘的Fact（）函数，编程并计算1！+2！+3！+...+n!的值。
#include <stdio.h>
int Fact(int n)
{
	int i,j,t,sum=0;
	for(i=1;i<=n;i++)
	{
		t=1;
		for(j=i;j>0;j--){
			t*=j;
		}
		sum+=t;
		if(i==1) printf("1!");
		else printf("+%d!",i);
	}

	return sum;
}
int main()
{
	printf("请输入n的值：\n"); 
	int n;
	scanf("%d",&n);
	printf("=%d",Fact(n));
}
