//���ַ�������n���ַ�����ǰ������ַ�����ƶ�m��λ�ã����������m���ַ������ǰ��m��
void copy(char *A,int n,int m) 
{
	char B[100],C[100];
	int i, j;
	for(i=0;i<m;i++)
	{
		B[i]=A[i];
	}
	for(i=n-m,j=0;i<n;i++,j++)
	{
		C[j]=A[i];
	} 
	for(i=0;i<m;i++)
	{
		A[i]=C[i];
	}
	for(i=n-m,j=0;i<n;i++,j++)
	{
		A[i]=B[j];
	}
}
//��������������ǰ����m���ַ������ǰ���m�� 
	void moving(char*A,int m,int n)
	{
		char C[100];
		int i;
		for(i=0;i<n;i++)
		{
			C[i]=A[i];
		}
		for(i=0;i<m;i++)
		{
			A[i]=' ';
		 } 
		 int j;
		for(i=m,j=0;j<n;i++,j++) 
		{
			A[i]=C[j];	
		}
		A[m+n]=0; 
	}
//��������������ǰ������ַ�����ƶ�m��λ��
#include<stdio.h>
int main()
{
	printf("��������������ַ���\n");
	char A[100];
	gets(A);
	int n,m;
	printf("����������ַ������Ͳ�������Ҫ�����������С�ڻ��ߵ����ַ�����\n");
	scanf("%d %d",&n,&m);
	printf("��һ����֮������飺\n"); 
	copy(A,n,m);
	puts(A);
	printf("�ڶ�����֮������飺\n");
	moving(A,m,n); 
	puts(A); 
	return 0;
}
