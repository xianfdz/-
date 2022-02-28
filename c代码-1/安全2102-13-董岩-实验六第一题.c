//1.  输入三个字符串，按照由小到大顺序排序 
#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
	char a[N],b[N],c[N];
	char *p1=a,*p2=b,*p3=c,*p4=NULL;
	printf("请输入三个字符串(每个字符串长度不超过100)：\n");
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
	printf("三个字符串从小到大排序为：\n");
	puts(p1);
	puts(p2);
	puts(p3);
	return 0;
} 
