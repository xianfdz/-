//1. ����һ��������Ҫ��ú��������ж������������λ�����Ƿ�Ϊ������  
#include<stdio.h>
int pan(int n);//�ж�n�Ƿ�Ϊ���������nΪ�������򷵻�ֵΪ1�����n�����������򷵻�ֵ��0  
int main()
{
	int n;
	printf("������һ����λ����\n");
	scanf("%d",&n); 
	if(pan(n)) printf("%d������\n",n);
	else printf("%d��������\n",n);
	return 0;
}
int pan(int n)
{
	int i,t=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0){
			t=0;
			break;
		} else {
			t=1;
		}
	}
	return t;
}

