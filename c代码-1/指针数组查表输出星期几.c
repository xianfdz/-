/*�����ָ�����飩�������ַ�������week_day���в��ң������ڣ�
������ַ����ڱ��е���ţ��������-1��week_day����ָ������ʵ�֡�
0	sunday
1	monday
2	tuesday
3	wednesday
4	thursday
5	friday
6	saturday
**�����ʽҪ��"%s" ��ʾ��Ϣ��"Enter a string:"
**�����ʽҪ��"l=%d\n"
��������ʾ�����£�
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

