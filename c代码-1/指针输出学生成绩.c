/*输入m个学生（最多为30人）n门课程（最多为5门）的成绩，然后计算并打印每个学生各门课的总分和平均分。其中，m和n的值由用户从键盘输入。

通过上机运行程序并观察运行结果，分析下面程序错误的原因并改正之。*/

#include  <stdio.h>
#define STUD   30           /* 最多可能的学生人数 */
#define COURSE 5           /* 最多可能的考试科目数 */
void  Total(int *pScore, int sum[], float aver[], int m, int n);
void  Print(int *pScore, int sum[], float aver[], int m, int n);
int main()
{
    int     i, j, m, n, score[STUD][COURSE], sum[STUD];
    float   aver[STUD];
    printf("How many students?\n");
    scanf("%d", &m);
    printf("How many courses?\n");
    scanf("%d", &n);
    printf("Input scores:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    Total(*score, sum, aver, m, n);
    Print(*score, sum, aver, m, n);
    return 0;
}
void  Total(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + pScore[n * i + j];
        }
        aver[i] = (float) sum[i] / n;
    }
}
void  Print(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    printf("Result:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d\t", pScore[i * n+ j]);
        }
        printf("%5d\t %6.1f\n", sum[i], aver[i]);
    }
}
