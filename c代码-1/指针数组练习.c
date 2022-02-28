/*
请用指针数组编程实现按奥运会参赛国的国名在字典中的顺序对其入场次序进行排序。
假设参赛国不超过150个，参赛国的国名不超过9个字符。
下面程序中存在比较隐蔽的错误，请通过分析和调试程序，发现并改正程序中的错误。
*/
#include  <stdio.h>
#include <string.h>
#define   MAX_LEN  10
#define   N  150
void SortString(char *ptr[], int n);
int main()
{
    int    i, n;
    char   *pStr[N], str[N][MAX_LEN];
    printf("How many countries?\n");
    scanf("%d",&n);
    for (i = 0; i < N; i++)
	{
        pStr[i] = str[i];
    }
    printf("Input their names:\n");
    getchar();
    for (i=0; i<n; i++)
    {
        scanf("%s",pStr[i]);
    }
    SortString(pStr, n);
    printf("Sorted results:\n");
    for (i=0; i<n; i++)
    {
        puts(pStr[i]);
    }
}
 
void SortString(char *ptr[], int n)
{
    int    i, j;
    char  *temp=NULL;
    for (i=0; i<n-1; i++)
    {
        for (j = i+1; j<n; j++)
        {
            if (strcmp(ptr[j],ptr[i])<0)
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
/*
注意：
（1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
（2）对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
（3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
（4）改错时不能改变程序原有的意图，也不要改变代码的输入输出格式。
（5）经教师手工核对后，如果未使用指针数组做函数参数编程，那么即使运行结果正确也不给分。
*/
