//2. ����һ��������Ҫ��ú������Խ������������λ�����ֽ⡣ 
#include<stdio.h>
int pan(int n);//�ж�n�Ƿ�Ϊ���������nΪ�������򷵻�ֵΪ1�����n�����������򷵻�ֵ��0  
void fenjie(int n);//�ֽ�n�����nΪ��������n=1*n,���n��������,���n�ֽ�Ϊ������������ 
int main()
{
	int n;
	printf("������һ����λ����\n");
	scanf("%d",&n); 
	printf("%d�ֽ��Ϊ��\n",n);
	fenjie(n);
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
void fenjie(int n)
{
	int i,t=n,cnt=0;
	if(pan(n)) printf("%d=1*%d",n,n);
	for(i=2;i<t;i++)
	{
		while(n%i==0){
			n/=i;
			cnt++;
			if(cnt==1) printf("%d=%d",t,i);
			else printf("*%d",i);
		}
	}
}
