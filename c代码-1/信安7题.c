#include <stdio.h>
int main()
{
	int x[5]={1,2,3,4,5,};
	int*p=(int*)(&x+1);//&xָ�����׵�ַ��&x+1ָ�����������һ����ַ����x[6]�ĵ�ַ���Ѿ�Խ���� 
	printf("%d,%d",*(x+1),*(p-1));
	return 0;
}
