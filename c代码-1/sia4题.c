//1.���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ��
#include <stdio.h>
int main()
{
	char t,x;
	printf("���������ڼ��ĵ�һ����ĸ\n");
	scanf("%c",&t);
	if(t=='M') {
		printf("����һ");
	}
	else if(t=='W') {
		printf("������");
	}
	else if(t=='F') {
		printf("������");
	}
	else if(t=='T'){
		printf("���������ڼ��ĵڶ�����ĸ\n");
		getchar();
		scanf("%c",&x);
		if(x=='u') printf("���ڶ�");
		else if(x=='h'){
			printf("������");
		}
	}
	else if(t=='S'){
		printf("���������ڼ��ĵڶ�����ĸ\n");
		getchar();
		scanf("%c",&x);
		if(x=='a') printf("������");
		else if(x=='u'){
			printf("������");
		}
	}
	return 0;
} 
