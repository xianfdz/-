//在字符串中有n个字符，是前面各个字符向后移动m个位置，并且是最后m个字符变成最前面m个
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
//这个函数的作用是把最后m个字符变成最前面的m个 
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
//这个函数的作用是把所有字符向后移动m个位置
#include<stdio.h>
int main()
{
	printf("输入你想操作的字符串\n");
	char A[100];
	gets(A);
	int n,m;
	printf("输入输入的字符个数和操作数，要求操作数必须小于或者等于字符个数\n");
	scanf("%d %d",&n,&m);
	printf("第一步完之后的数组：\n"); 
	copy(A,n,m);
	puts(A);
	printf("第二步完之后的数组：\n");
	moving(A,m,n); 
	puts(A); 
	return 0;
}
