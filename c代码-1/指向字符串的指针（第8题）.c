#include<stdio.h>
#include<string.h>
#define alp 100
char* stringin(char *m,char *n);
int mycmp(const char* s1,const char* s2)
{
	//int idx=0;
	//while(s1[idx]==s2[idx]&&s1[idx]!='\n')
	//{
	//	idx++;
	//}
	while(*s1==*s2 && *s1!='\0')
	{
		s1++;
		s2++;
	}
	return *s1-*s2;
} 
int main()
{
 char x,c[alp],d[alp];
 char * a=c;
 char * b=d;
 scanf("%s",c);
 getchar();
 scanf("%s",d);
 b=stringin(a,b);
 printf("%s",b);
 return 0;
}
char* stringin(char *m,char *n)
{
 int i;
 for(i=0;i<strlen(n)-strlen(m);i++)
 {
  if(*m==(*n+i)){
  return n+i;
  }
 }
 return 0;
} 
