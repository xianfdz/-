/*�����º���ԭ�ͣ�������ٷ���д�������Լ���ĺ���Gcd()
�����������е��øú������㲢����Ӽ�����������������������Լ����
��ٷ��Ļ���˼���ǣ����ҵ�a��b�еĽ�С��t��Ȼ���t��ʼ��μ�1����ÿ�ֿ��ܣ�
������t��1֮���������������һ�����㹫Լ��������t������a��b�����Լ����
/* �������ܣ�����a��b�����Լ�������븺��ʱ����-1 */
/*int Gcd(int a, int b)
Ҫ�����£�
��1���Ӽ������������������
     ����������Gcd()����������������������Լ����
��2��Gcd����ԭ��Ϊ��
     int Gcd(int a, int b);
     �����������������������򷵻�-1�����򣬷��������������Լ����
��3��**������ʾ��Ϣ��ʽҪ��"Inpu4t a,b:"
       �����ʽ��"%d,%d"
     **�����ʾ��ϢҪ��
     ���������������������������"Input number should be positive!\n"���������¸�ʽ���"Greatest Common Divisor of %d and %d is %d\n"*/
#include<stdio.h>
int Gcd(int a,int b)
{
	int t;
	if(a>0&&b>0)
	{
		if(a>b) t=b;
		else t=a;
		for( ;t>=1;t--)
		{
			if(a%t==0&&b%t==0) break;
		}
	}else t=-1;
	
	return t;
}
int main()
{
	int a,b,m;
	printf("Input a,b:\n");
	scanf("%d %d",&a,&b);
	m=Gcd(a,b);
	if(m==-1) printf("Input number should be positive!\n");
	else printf("Greatest Common Divisor of %d and %d is %d\n",a,b,m);
	return 0;
}

