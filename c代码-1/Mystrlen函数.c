
/* 
自己定义一个函数，用字符数组作为函数参数的类型，
以实现和函数strlen相同的功能。
要求：
（1）按如下函数原型进行编程：
	int Mystrlen(char str[]);
（2）在主函数中：
     任意输入一个字符串（长度不超过80个字符）;
     调用函数Mystrlen()计算输入字符串的实际长度;
     然后打印计算结果。
     **要求输入提示信息为："Please input the string:\n"
     **要求输出格式为:"%d\n"
注意：
（1）字符串中的空格计入字符串实际长度，
     但是字符串结束标志不计入字符串实际长度。
（2）必须使用函数编程。否则没有成绩。

*/
#include<stdio.h>
#define N 80
int Mystrlen(char str[]);
int main()
{
	printf("Please input the string:\n");
	char zifu[N];
	gets(zifu);
	printf("%d\n",Mystrlen(zifu));
	return 0;
} 
int Mystrlen (char str[])
{
	int cnt=0;
	while(*str!=0)
	{
		cnt++;
		*str++;
	}
	return cnt;
}
