//1.  ���������ַ�����������С����˳������ 
#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char a[N],b[N],c[N];
	char *p1=a,*p2=b,*p3=c,*p4=NULL;
	printf("�����������ַ���(ÿ���ַ������Ȳ�����100)��\n");
	gets(p1);
	gets(p2);
	gets(p3);
	if(strcmp(p1,p2)>0){
		p4=p1;
		p1=p2;
		p2=p4;
	}
	if(strcmp(p1,p3)>0){
		p4=p1;
		p1=p3;
		p3=p4;
	}
	if(strcmp(p2,p3)>0){
		p4=p3;
		p3=p2;
		p2=p4;
	}
	printf("�����ַ�����С��������Ϊ��\n");
	puts(p1);
	puts(p2);
	puts(p3);
	return 0;
} 
