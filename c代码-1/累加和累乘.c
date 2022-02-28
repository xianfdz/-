
/*
求 s = a+aa+aaa+… …+aaa…a的值，其中a是一个数字，如2+22+222+2222,a的值和加数个数n，
均从键盘获取。要求a属于[1,9],n小于10（如果不满足此条件，就重新输入）。
输入：输入a值和n值
输入提示信息："Please input a:"
输入格式："%d"
输入提示信息："Please input n:"
输入格式："%d"
如：
Please input a:8
Please input n:9
输出：算式及和
输出提示信息：
"Sum=算式“，输出格式”%ld“
”Sum=和，输出格式”%ld“
循环n次，i=0时输出用"%ld"，其他输出用"+%ld"（或者前面输出用"%ld+"，最后一次输出用"%ld"）
如：
Sum=8+88+888+8888+88888+888888+8888888+88888888+888888888
Sum=987654312
*/
#include <stdio.h>
int main()
{
	int a,n,i,m,h,p;
	long int sum=0;
	do
	{
	printf("Please input a:");
	scanf("%d",&a);
	printf("Please input n:");
	scanf("%d",&n);
	}while(a<1||a>9||n<0||n>9);
	i=a;
	printf("Sum=");
	
	for(m=1;m<=n;m++)
	{
		p=1;
		for(h=1;h<m;h++)	p=p*10; 
		if(m>1)		a=a+i*p;
		sum+=a;
		if(m<n) 	printf("%ld+",a);
		if(m==n) 	printf("%ld\n",a);
	}
	
	printf("Sum=%ld",sum);
	return 0; 
}

