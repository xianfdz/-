
/*
�� s = a+aa+aaa+�� ��+aaa��a��ֵ������a��һ�����֣���2+22+222+2222,a��ֵ�ͼ�������n��
���Ӽ��̻�ȡ��Ҫ��a����[1,9],nС��10���������������������������룩��
���룺����aֵ��nֵ
������ʾ��Ϣ��"Please input a:"
�����ʽ��"%d"
������ʾ��Ϣ��"Please input n:"
�����ʽ��"%d"
�磺
Please input a:8
Please input n:9
�������ʽ����
�����ʾ��Ϣ��
"Sum=��ʽ���������ʽ��%ld��
��Sum=�ͣ������ʽ��%ld��
ѭ��n�Σ�i=0ʱ�����"%ld"�����������"+%ld"������ǰ�������"%ld+"�����һ�������"%ld"��
�磺
Sum=8+88+888+8888+88888+888888+8888888+88888888+888888888
Sum=987654312
*/
#include <stdio.h>
int main()
{
	int a,n,i,m,h,p;
	long int sum=0;
	do
	{
	printf("Please input a:");
	scanf("%d",&a);
	printf("Please input n:");
	scanf("%d",&n);
	}while(a<1||a>9||n<0||n>9);
	i=a;
	printf("Sum=");
	
	for(m=1;m<=n;m++)
	{
		p=1;
		for(h=1;h<m;h++)	p=p*10; 
		if(m>1)		a=a+i*p;
		sum+=a;
		if(m<n) 	printf("%ld+",a);
		if(m==n) 	printf("%ld\n",a);
	}
	
	printf("Sum=%ld",sum);
	return 0; 
}

