#include<stdio.h>
#include<string.h>
char* mycat(char*src,char*dst)
{
	
	//if
	(src[strlen(src)]=dst[0]);
	//{/
	//	*dst++=
	//}
	return src;
}
int main()
{
	char s1[]="qwee";
	char s2[]="rty";
	//strcat(s1,s2);
	mycat(s1,s2);
	printf("%s",s1);
}
