

//��� 2~n֮����������������ͣ�n�ɼ������롣������ֻ�ܱ�1������������������Ҫ���д�����ж���Ȼ��x�Ƿ�Ϊ����������ԭ��Ϊ��
//int IsPrime(unsigned int x); //x����������1��������������0��
//������ʾ��Ϣ��"Please input n(n>1):"
//�����ʽ��"%d"
//ÿ�������������ʽ��"%d\n"
//��������ʽ��"sum of prime numbers:%d"
#include <stdio.h>
int IsPrime(unsigned int x);
int main()
{
	int n,i;
	int sum=0;
	printf("Please input n(n>1):"); 
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(IsPrime(i))
		{
			printf("%d\n",i);
			sum+=i;
		}
	}
	printf("sum of prime numbers:%d",sum);
}
int IsPrime(unsigned int x)
{
	int i,m,cnt;
	i=2;
	if(x==2)
	{
		cnt=1;
	}else{
		do
		{
			m=x%i;
			i++;
		}while(m!=0&&i<x);
		if(m)
		{
			cnt=1;
		}else{
			cnt=0;
		}
		
	}
	return cnt;
}
