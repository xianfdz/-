/*������ѧ�еĹŵ�����ѧ�У���һ������������룬�п������룬��ԭ��
Ϊ�����������Կ�������������ĸƫ���������������ԿΪ 3����ô����
���������ĸ�� a����������Ϊ d���������Ϊ e����������Ϊ b����
�����ƣ�������ѭ���ṹ��ʵ����һ����ļ����Լ����ܡ�*/
#include<stdio.h>
int main()
{
	int j,i,n;//nΪ��Կ 
	char s,t;//sΪҪ���ܵ���ĸ��tΪҪ���ܵ���ĸ 
	printf("�����������Կ:");
	scanf("%d",&n);
	printf("�������������ĸ:\n");
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
	printf("\n�������������ĸ:\n");
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
