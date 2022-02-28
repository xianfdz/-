/*请按给定的函数原型，编写程序判断输入的字符串是否为“回文”。
所谓“回文”，是指顺读和倒读都一样的字符串。
如：“level”、“ABCCBA”都是回文。
如是回文输出这个字符串，否则输出“No!”。
要求：在主函数读入字符串，判断是否是回文调用Judger()函数实现。若是回文返回值为1，否则返回值为0。
Judger()函数原型：
int Judger(char *a);
**输入格式要求：无
**输出格式要求："No!" （不是回文），若是回文，则输出串本身
程序运行的输入输出样例1：
abc   
No!   
程序运行的输入输出样例2：
12321 
12321*/
#include <stdio.h>
#include <string.h>
#define N 40
int Judger(char*a)
{
	char b[N]={0};
	int i,m,t;
	int n=strlen(a);
	for(i=0,m=n-1;i<n,m>=0;i++,m--)
	{
		b[m]=a[i];
	}
//	printf("%s\n",a);
//	printf("%s\n",b);
	return strcmp(a,b);
	
}
int main()
{
	char a[N];
	gets(a);
	if(Judger(a)) printf("No!");
	else printf("%s",a);
} 
