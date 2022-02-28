

/*��Сд��ĸת������:
    ���Ӽ��̶����Сд��ĸת���ɴ�д��ĸ����Ļ�����ͬʱ����ô�д��ĸ��ASCII��ֵ����ռ���ڴ�ռ��С��(��������е�?����һ���ո�)
����һ�У�Сд��ĸ
������У���һ��Ϊ��ʾ����Сд��ĸ���ڶ������ת����Ĵ�д��ĸ����ӦASCII��ֵ�����ڴ���ռ�����ֽ�
�����ʾ��Ϣ��ʽ��"please input a lowercase:\n"
��������ʾ����
please input a lowercase: 
a�L
A 65 1
*/
#include <stdio.h> 
int main()
{
	char a;
    printf("please input a lowercase:\n");
	scanf("%c",&a);
	char n;
	n=a-32;
	printf("%c %d ",n,n);
	printf("%d",sizeof(n));
}

