

/*拆分英文名
从键盘输入某同学的英文名（小写输入，假设学生的英文名只包含3个字母。如: tom），编写程序在屏幕上输出该同学的英文名，且首字母大写（如: Tom）。
同时输出组成该英文名的所有英文字符在26个英文字母中的序号。
以下为程序的输出示例：
input your English name:
tom↙
Tom
t:20
o:15
m:13

输入格式:  "%c%c%c"

输入提示信息："input your English name:\n"
首字母大写的英文姓名的输出格式："%c%c%c\n"
姓名中每个字母在26个英文字母中的序号的输出格式："%c:%d\n"
*/
#include <stdio.h>
int main()
{
	char x,y,z;
	printf("input your English name:\n");
    scanf("%c%c%c",&x,&y,&z);
    char m=x-32;
    int q=x-96;
    int w=y-96;
    int e=z-96;
    printf("%c%c%c\n",m,y,z);
    printf("%c:%d\n%c:%d\n%c:%d\n",x,q,y,w,z,e);
}

