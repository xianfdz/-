/*用字符指针作函数参数编程实现如下功能：在字符串中删除与某字符相同的字符。
**输入格式要求："%s"  
输入提示信息：
"Input a string:"  
"Input a character:"
**输出格式要求："Results:%s\n"
程序运行示例1如下：
Input a string:hello,world!
Input a character:o
Results:hell,wrld!
请按如下框架编程：*/ 

#include <stdio.h>
#include <string.h>
#define N 100
void  Squeeze(char *s, char c);
int main()
{
    char  str[N], ch;
    printf("Input a string:");
    gets(str);
    printf("Input a character:");
    ch = getchar();
    Squeeze(str,ch);
    printf("Results:%s\n", str);
    return 0;
}
void  Squeeze(char *s, char c)
{
    int i,j;
    char w;
    for(i=0;i<N;i++)
    {
    	if(s[i]==c) 
		{
			s[i]=' ';
			for(j=i;j<N;j++)
			{
				s[j]=s[j+1];
			}	
		}
    }
}
