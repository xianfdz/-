/*查表（用指针数组）。输入字符串，在week_day表中查找，若存在，
输出该字符串在表中的序号，否则输出-1。week_day表用指针数组实现。
0	sunday
1	monday
2	tuesday
3	wednesday
4	thursday
5	friday
6	saturday
**输入格式要求："%s" 提示信息："Enter a string:"
**输出格式要求："l=%d\n"
程序运行示例如下：
Enter a string:saturday
l=6*/
#include<stdio.h>
#include<string.h> 
int main()
{
	char *week_day[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	char week[10];
	int i;
	printf("Enter a string:");
	scanf("%s",week);
	for(i=0;i<7;i++)
	{
		if(strcmp(week,week_day[i])==0) 
		{
			if(i!=0) printf("l=%d",i);
			else printf("l=7");
		}
	}
	return 0;
}

