/*���ַ�ָ���������������ʵ�����¹��ܣ����ַ�����ɾ����ĳ�ַ���ͬ���ַ���
**�����ʽҪ��"%s"  
������ʾ��Ϣ��
"Input a string:"  
"Input a character:"
**�����ʽҪ��"Results:%s\n"
��������ʾ��1���£�
Input a string:hello,world!
Input a character:o
Results:hell,wrld!
�밴���¿�ܱ�̣�*/ 

#include <stdio.h>
#include <string.h>
#define N 100
void  Squeeze(char *s, char c);
int main()
{
    char  str[N], ch;
    printf("Input a string:");
    gets(str);
    printf("Input a character:");
    ch = getchar();
    Squeeze(str,ch);
    printf("Results:%s\n", str);
    return 0;
}
void  Squeeze(char *s, char c)
{
    int i,j;
    char w;
    for(i=0;i<N;i++)
    {
    	if(s[i]==c) 
		{
			s[i]=' ';
			for(j=i;j<N;j++)
			{
				s[j]=s[j+1];
			}	
		}
    }
}
