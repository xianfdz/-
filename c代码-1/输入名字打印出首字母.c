#include<stdio.h>
#define Max 30
int main()
{
	char name[Max];
	int i=0,cnt=0;
	printf("ÇëÊäÈëÄãµÄÃû×Ö:\n"); 
	scanf("%s",name);
	for(i=0;i<Max;i++)
	{
		if(name[i]>='A'&&name[i]<='Z') printf("%c",name[i]);
	}
	return 0;
} 
