//程序：计算整数中数字的位数。
//**输入格式要求："%d" 提示信息："Enter a nonnegative integer:"
//**输出格式要求："The number has %d digit(s).\n" 
//程序运行示例如下：
//Enter a nonnegative integer: 60
//The number has 2 digit(s).
#include <stdio.h>
int main()
{
	int x;
	printf("Enter a nonnegative integer:");
	scanf("%d",&x);
	int cnt=0;
	if(x<0){
		x=-x;
	}
	if(x==0){
		cnt++;
	}
	while(x>0)
	{
		cnt++;
		x/=10;
	}
	printf("The number has %d digit(s).",cnt);
	return 0;
}
