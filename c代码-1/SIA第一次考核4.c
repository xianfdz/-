/*编一个程序，打入月份号，输出该月的英文月名。例如，输入“3”，
则输出“March”，要求用指针数组处理。*/
#include <stdio.h>
int main()
{
	char (*a)[10]={"1月","2月","March","4月","5月","June","July","8月","9月","10月","11月","12月"};
	int n,i;
	printf("请输入月份号：\n");
	scanf("%d",&n);
	printf("%s",*(a+n-1));
	return 0;
} 
