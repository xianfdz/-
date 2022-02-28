/*任意输入英文的星期几，通过查找星期表，输出其对应的数字，
若查到表尾，仍未找到，则输出错误提示信息。
下面程序中存在比较隐蔽的错误，请通过分析和调试程序，发现并改正程序中的错误。
注意：请将修改正确后的完整源程序拷贝粘贴到答题区内。
对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
改错时不能改变程序原有的意图，不能改变函数原型
*/ 
#include  <stdio.h>
#include <string.h>
#define   WEEKDAYS  7
#define   MAX_STR_LEN  10
main()
{
    int i, pos;
    int findFlag=0;
    char x[MAX_STR_LEN];
    char weekDay[][MAX_STR_LEN] = { "Monday", "Tuesday",
                                   "Wednesday", "Thursday", "Friday", "Saturday","Sunday"
                                  };
    printf("Please enter a string:\n");
    scanf("%s", &x);
    for (i = 0; i < WEEKDAYS || findFlag==1; i++)
    {
       
	    if (strcmp(x,weekDay[i])==0)
	    {
	        printf("%s is %d\n", x, i+1);
	        break;
	    }
	    else
	    {
	    	if(i==6)
	        printf("Not found!\n");
	    }
	}    
}
