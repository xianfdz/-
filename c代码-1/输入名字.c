

/*���Ӣ����
�Ӽ�������ĳͬѧ��Ӣ������Сд���룬����ѧ����Ӣ����ֻ����3����ĸ����: tom������д��������Ļ�������ͬѧ��Ӣ������������ĸ��д����: Tom����
ͬʱ�����ɸ�Ӣ����������Ӣ���ַ���26��Ӣ����ĸ�е���š�
����Ϊ��������ʾ����
input your English name:
tom�L
Tom
t:20
o:15
m:13

�����ʽ:  "%c%c%c"

������ʾ��Ϣ��"input your English name:\n"
����ĸ��д��Ӣ�������������ʽ��"%c%c%c\n"
������ÿ����ĸ��26��Ӣ����ĸ�е���ŵ������ʽ��"%c:%d\n"
*/
#include <stdio.h>
int main()
{
	char x,y,z;
	printf("input your English name:\n");
    scanf("%c%c%c",&x,&y,&z);
    char m=x-32;
    int q=x-96;
    int w=y-96;
    int e=z-96;
    printf("%c%c%c\n",m,y,z);
    printf("%c:%d\n%c:%d\n%c:%d\n",x,q,y,w,z,e);
}

