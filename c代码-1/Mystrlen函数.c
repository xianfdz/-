
/* 
�Լ�����һ�����������ַ�������Ϊ�������������ͣ�
��ʵ�ֺͺ���strlen��ͬ�Ĺ��ܡ�
Ҫ��
��1�������º���ԭ�ͽ��б�̣�
	int Mystrlen(char str[]);
��2�����������У�
     ��������һ���ַ��������Ȳ�����80���ַ���;
     ���ú���Mystrlen()���������ַ�����ʵ�ʳ���;
     Ȼ���ӡ��������
     **Ҫ��������ʾ��ϢΪ��"Please input the string:\n"
     **Ҫ�������ʽΪ:"%d\n"
ע�⣺
��1���ַ����еĿո�����ַ���ʵ�ʳ��ȣ�
     �����ַ���������־�������ַ���ʵ�ʳ��ȡ�
��2������ʹ�ú�����̡�����û�гɼ���

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
