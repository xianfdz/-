#include<stdio.h>
#include<string.h>
int main()
{
	char s[32];
//	scanf("%s",s);
	gets(s);
	int n=strlen(s);
	int l;
	char ch;
//	strrev(s);//×Ö·û´®ÄæÖÃº¯Êı 
	for(l=0;l<=n/2;l++,n--)
	{
		ch=s[l];
		s[l]=s[n-1];
		s[n-1]=ch;
	}
//	printf("%s",s);
	puts(s);
	return 0;
}
