/*在密码学中的古典密码学中，有一种最基本的密码，叫凯撒密码，其原理
为，根据你的秘钥，来决定你的字母偏移量，比如你的秘钥为 3，那么你如
果输入的字母是 a，则加密输出为 d，如果输入为 e，则解密输出为 b，以
此类推，请利用循环结构来实现这一密码的加密以及解密。*/
#include<stdio.h>
int main()
{
	int j,i,n;//n为密钥 
	char s,t;//s为要加密的字母，t为要解密的字母 
	printf("请输入你的密钥:");
	scanf("%d",&n);
	printf("请输入待加密字母:\n");
	getchar();
	while(1)
	{
		scanf("%c",&s);
		if(s!='\n')
		{
		for(i=0;i<n;i++)
		{
			if(s>='a'&&s<='z') {
				if(s+1<='z')s=s+1;
				else  s='a';
			}
			if(s>='A'&&s<='Z') {
				if(s+1<='Z') s=s+1;
				else s='A';
			}
		}
		printf("%c",s);
		} else  break;
	}
	printf("\n请输入待解密字母:\n");
	while(1)
	{
		scanf("%c",&t);
		if(t!='\n') 
		{
		for(i=0;i<n;i++)
		{
			if(t>='a'&&t<='z') { 
				if(t-1>='a') t=t-1;
				else s='z';
			}
			if(t>='A'&&t<='Z') { 
				if(t-1>='A') t=t-1;
				else t='Z';
			}
		}
		printf("%c",t);
		} else  break;
	}
	return 0;
}
