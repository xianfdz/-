//2. 定义一个函数，要求该函数可以将任意输入的两位整数分解。 
#include<stdio.h>
int pan(int n);//判断n是否为素数，如果n为素数，则返回值为1，如果n不是素数，则返回值是0  
void fenjie(int n);//分解n，如果n为素数，则n=1*n,如果n不是素数,则把n分解为多个质因数相乘 
int main()
{
	int n;
	printf("请输入一个两位数：\n");
	scanf("%d",&n); 
	printf("%d分解后为：\n",n);
	fenjie(n);
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
void fenjie(int n)
{
	int i,t=n,cnt=0;
	if(pan(n)) printf("%d=1*%d",n,n);
	for(i=2;i<t;i++)
	{
		while(n%i==0){
			n/=i;
			cnt++;
			if(cnt==1) printf("%d=%d",t,i);
			else printf("*%d",i);
		}
	}
}
