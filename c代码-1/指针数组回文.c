/*�밴�����ĺ���ԭ�ͣ���д�����ж�������ַ����Ƿ�Ϊ�����ġ���
��ν�����ġ�����ָ˳���͵�����һ�����ַ�����
�磺��level������ABCCBA�����ǻ��ġ�
���ǻ����������ַ��������������No!����
Ҫ���������������ַ������ж��Ƿ��ǻ��ĵ���Judger()����ʵ�֡����ǻ��ķ���ֵΪ1�����򷵻�ֵΪ0��
Judger()����ԭ�ͣ�
int Judger(char *a);
**�����ʽҪ����
**�����ʽҪ��"No!" �����ǻ��ģ������ǻ��ģ������������
�������е������������1��
abc   
No!   
�������е������������2��
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
