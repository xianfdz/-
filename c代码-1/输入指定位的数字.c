/*读入一个整数n和整数k，程序输出n的从右向左的第k个十进制数字位值。例如，读入n=1234, k=2，则程序输出3。
**输入格式要求："%d%d" 提示信息："input integer n and k:\n"
**输出格式要求："%d"
程序运行示例如下：
input integer n and k:
1234 2
3
*/
#include <stdio.h>
int main()
{
	int i,n,k;
	printf("input integer n and k:\n");
	scanf("%d %d",&n,&k);
	for(i=1;i<k;i++)
	{
		n/=10;
	}
	printf("%d",n%=10);
}
