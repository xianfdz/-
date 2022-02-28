/*编写一个程序完成输入一个整数，输出它的符号。
**输入格式要求："%d" 提示信息："Enter n:"
**输出格式要求："+\n" "-\n" "this number has no sign\n"
程序运行示例1如下：
Enter n:90
+
程序运行示例2如下：
Enter n:0
this number has no sign
*/
#include <stdio.h>
int main()
{
	int x;
	printf("Enter n:");
	scanf("%d",&x);
	if(x>0)
	{printf("+");}
	else if(x<0)
	{printf("-");}
	else{printf("this number has no sign\n");}
	return 0;
}
