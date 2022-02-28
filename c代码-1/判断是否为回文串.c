/*回文串:从后往前和从前往后读时结果是一样的字符串，如abba，12c21。
请编写子函数，以指针作为形参，实现判断一个字符串是否是回文串的功能，并在主函数里调用。*/
#include <stdio.h>
#include <string.h>
#define N 100
void panduan(char*p);
int main()
{
	printf("请输入字符串:");
	char a[N]={0};
	gets(a);
	panduan(a);
	return 0; 
} 
void panduan(char*p)
{
	int i,j,cnt;
	for(i=0,j=strlen(p)-1;i<j;i++,j--){
		if(p[i]!=p[j]){
			cnt=0;
			break;
		} else cnt=1;
	}
	if(cnt) printf("该字符串是回文串");
	else printf("该字符串不是回文串"); 
}
