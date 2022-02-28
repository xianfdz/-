
/*
输入一个正整数，要求以相反的顺序输出该数。用递归方法实现。
**输入格式要求："%d" 提示信息："Enter number:"
**输出格式要求："%d"
程序运行示例如下：
Enter number:35567899
99876553
*/
#include <stdio.h>
int fan (int x); 
int main()
{
	int number,t;
	printf("Enter number:");
	scanf("%d",&number);
	t=fan(number);
	printf("%d",t);
}
int fan (int x)
{
	int c;
	while(x>9)
	{
		c=x%10;
		printf("%d",c);
		x=x/10;
	}
}

