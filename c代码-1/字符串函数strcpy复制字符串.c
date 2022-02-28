#include<stdio.h>
#include<string.h>
char*mycpy(char*dst,const char*src)
{
	char *ret=dst;
	while(*dst++ = *src++)
	 ;
	 *dst='\n';
	 return ret; 
}
int main(int argc,char const*argv[])
{
	//char*dst=(char*)malloc(strlen(src)+1);
	char s1[]="abcf";
	char s2[]="abcd";
	//strcpy(s1,s2);//°Ñs2±äÎªs1 
	mycpy(s1,s2);
	printf("%s",s1); 
}
