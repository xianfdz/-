

/*用字符指针作函数参数编程实现字符串逆序存放功能。
输入提示信息："Input a string:"
输入字符串用gets()
输出提示信息："Inversed results:%s\n"*/
#include <stdio.h>
#include <string.h>
#define N 40
void nizhi(char *a)
{
	int i;
	char t;
	int n=strlen(a);
	for(i=0;i<n/2;i++)
	{
		t=a[n-1-i];
		a[n-1-i]=a[i];
		a[i]=t;
	}
}
int main()
{
	printf("Input a string:");
	char a[N];
	gets(a);
	printf("Inversed results:\n");
	nizhi(a);
	printf("%s",a);
} 


