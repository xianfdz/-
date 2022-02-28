//1. 定义一个函数，要求该函数可以判断任意输入的两位整数是否为素数。  
#include<stdio.h>
int pan(int n);//判断n是否为素数，如果n为素数，则返回值为1，如果n不是素数，则返回值是0  
int main()
{
	int n;
	printf("请输入一个两位数：\n");
	scanf("%d",&n); 
	if(pan(n)) printf("%d是素数\n",n);
	else printf("%d不是素数\n",n);
	return 0;
}
int pan(int n)
{
	int i,t=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			t=0;
			break;
		} else {
			t=1;
		}
	}
	return t;
}

