/*�������Լ��������3�����ʣ����õ�������д�������Լ���ĺ���Gcd()�����������е��øú������㲢����Ӽ�����������������������Լ����
����1  ���a>b����a��b��a-b��b�����Լ����ͬ����Gcd(a, b) = Gcd(a-b, b)
����2  ���b>a����a��b��a��b-a�����Լ����ͬ����Gcd(a, b) = Gcd(a, b-a)
����3  ���a=b����a��b�����Լ����aֵ��bֵ��ͬ����Gcd(a, b) = a = b

Ҫ�����£�
��1���Ӽ������������������
     ����������Gcd()����������������������Լ����
��2��Gcd����ԭ��Ϊ��
     int Gcd(int a, int b);
     �����������������������򷵻�-1�����򣬷��������������Լ����
��3��**������ʾ��Ϣ��ʽҪ��"Input a,b:"
       �����ʽ��"%d,%d"
     **�����ʾ��ϢҪ��
     ���������������������������"Input error!\n"���������¸�ʽ���"Gcd=%d\n"*/
#include <stdio.h>
int Gcd(int a, int b);
int main()
{
	int a,b,m;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	if(a<=0||b<=0)
	{
		printf("Input error!\n");
	} else{
		m=Gcd(a,b);
		printf("Gcd=%d\n",m);
	}
	return 0;
}
int Gcd(int a, int b)
{
	int t;
	if(a>b){
		while(b>0)
		{
		t=a%b;
		a=b;
		b=t;
		}
		return a;
	}else if(b>a){
		while(a>0)
		{
		t=b%a;
		b=a;
		a=t;
		}
		return b;
	}else{
		return a;
	}
}
