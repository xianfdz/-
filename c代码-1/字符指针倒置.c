

/*���ַ�ָ���������������ʵ���ַ��������Ź��ܡ�
������ʾ��Ϣ��"Input a string:"
�����ַ�����gets()
�����ʾ��Ϣ��"Inversed results:%s\n"*/
#include <stdio.h>
#include <string.h>
#define N 40
void nizhi(char *a)
{
	int i;
	char t;
	int n=strlen(a);
	for(i=0;i<n/2;i++)
	{
		t=a[n-1-i];
		a[n-1-i]=a[i];
		a[i]=t;
	}
}
int main()
{
	printf("Input a string:");
	char a[N];
	gets(a);
	printf("Inversed results:\n");
	nizhi(a);
	printf("%s",a);
} 


