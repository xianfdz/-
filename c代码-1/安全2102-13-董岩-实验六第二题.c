//2. �Լ���д�ַ����ĸ��ƺ�����Ҫ����ָ��������ʵ�ְ��ַ���s1���Ƶ��ַ�����s2��
#include <stdio.h>
#include <string.h>
#define N 100
void fuzhi(char*p,char*q);
int main()
{
	int i;
	char s1[N]={0},s2[N]={0};//�����ʼ��Ϊ0; 
	char*p=s1,*q=s2;
	printf("�����������ַ������ַ�����С������100����\n");
	printf("s1=");
	gets(p);
	printf("s2=");
	gets(q);
	fuzhi(p,q);
	printf("���ַ���s1���Ƶ��ַ�����s2��\ns1=%s\ns2=%s",s1,s2);
	return 0;
}
void fuzhi(char*p1,char*p2)
{
	if(strlen(p1)>=strlen(p2)){
		do
		{
			*p2=*p1;
		}while(*p1++!=0&&*p2++!=0);
	} else {
		do
		{
			if(*p1!=0) *p2=*p1;
			else *p2=0;
			*p1++;
		}while(*p2++!=0);
	}
}
/* strlen(p1)>=strlen(p2)ʱ�� 
    		  p1->"a b c d   e   f '\0'"

			  p2->"h i j k '\0'        "
			  
	��1��ѭ�� p2->"a i j k '\0'        "
	    			
	��2��ѭ�� p2->"a b j k '\0'        "
	
	��3��ѭ�� p2->"a b c k '\0'        "
	
	��4��ѭ�� p2->"a b c d '\0'        "
	
	��5��ѭ�� p2->"a b c d   e         "
	
	��6��ѭ�� p2->"a b c d   e   f     "
	
	��7��ѭ�� p2->"a b c d   e   f '\0'"
	
*/

