/*
����ָ��������ʵ�ְ����˻�������Ĺ������ֵ��е�˳������볡�����������
���������������150�����������Ĺ���������9���ַ���
��������д��ڱȽ����εĴ�����ͨ�������͵��Գ��򣬷��ֲ����������еĴ���
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
ע�⣺
��1���뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
��2������û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
��3�����ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�
��4���Ĵ�ʱ���ܸı����ԭ�е���ͼ��Ҳ��Ҫ�ı��������������ʽ��
��5������ʦ�ֹ��˶Ժ����δʹ��ָ������������������̣���ô��ʹ���н����ȷҲ�����֡�
*/
