#include<stdio.h>
#include<string.h>
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
int main(int argc,char const*argv)
{
	char s1[]="qwe";
	char s2[]="eqwe";
	printf("%d\n",strcmp(s1,s2));//��s1[0]��s2[0]��ʼ�Ƚϣ��������£�ֱ������� 
	printf("%d\n",mycmp(s1,s2));
	return 0;
}
