/*�õݹ鷽����̼������Fibonacci���У�ͬʱ��ӡ������Fibonacci����ÿһ��ʱ����ĵݹ���ô�����
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input n:"
**�����ʽҪ��"Fib(%d)=%d, count=%d\n"
��������ʾ�����£�
Input n:10
Fib(1)=1, count=1
Fib(2)=1, count=3
Fib(3)=2, count=5
Fib(4)=3, count=9
Fib(5)=5, count=15
Fib(6)=8, count=25
Fib(7)=13, count=41
Fib(8)=21, count=67
Fib(9)=34, count=109
Fib(10)=55, count=177
˵��:�������Ϊn=0��n=1
*/ 
#include <stdio.h>
int fibs (int n);
int count;
int main()
{
	int n,i,x;
	printf("Input n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		x=fibs(i);
		printf("Fib(%d)=%d, count=%d\n",i,x,count);	
	}
}
int fibs(int n)
{
	int t;
	count++;
	if(n==0)
	{
		t=0;
	}else if(n==1)
	{
		t=1;
	}else{
		t=fibs(n-1)+fibs(n-2);
	}
	return t;
	

}
