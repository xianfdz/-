//���򣺼������������ֵ�λ����
//**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter a nonnegative integer:"
//**�����ʽҪ��"The number has %d digit(s).\n" 
//��������ʾ�����£�
//Enter a nonnegative integer: 60
//The number has 2 digit(s).
#include <stdio.h>
int main()
{
	int x;
	printf("Enter a nonnegative integer:");
	scanf("%d",&x);
	int cnt=0;
	if(x<0){
		x=-x;
	}
	if(x==0){
		cnt++;
	}
	while(x>0)
	{
		cnt++;
		x/=10;
	}
	printf("The number has %d digit(s).",cnt);
	return 0;
}
