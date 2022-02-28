/*编写程序，实现矩阵运算。
要求：输入两个矩阵，然后再分别输出它们各自的转置和两个矩阵的乘积。
输入格式：
第1行输入两个正整数m1，n1，表示第一个矩阵(A)的行数和列数；
第2行输入两个正整数m2，n2，表示第二个矩阵(B)的行数和列数；
第3行到第3+m1行，是矩阵A；
第3+m1+1行到3+m1+1+m2行是矩阵B。
输出格式：
按顺序分别输出A的转置，B的转置，AB，每个矩阵之间空一行。
输入样例：
 2 3
 3 2
 1 2 3
 4 5 6
 1 2
 3 4
 5 6
输出样例：
 1 4
 2 5
 3 6
 1 3 5
 2 4 6
 22 28
 49 64*/
#include<stdio.h>
int main()
{
	int m1,m2,n1,n2,i,j,t;
	printf("请输入第一个矩阵m1*n1:"); 
	scanf("%d %d",&m1,&n1);
	printf("请输入第二个矩阵m2*n2:"); 
	scanf("%d %d",&m2,&n2);
	int A[m1][n1];
	int B[m2][n2];
	printf("请输入第一个矩阵的元素:\n"); 
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("请输入第二个矩阵的元素:\n"); 
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("第一个矩阵转置后为:\n");
	for(j=0;j<n1;j++)
	{
		for(i=0;i<m1;i++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	} 
	printf("第二个矩阵转置后为:\n"); 
	for(j=0;j<n2;j++)
	{
		for(i=0;i<m2;i++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	} 
	int sum;
	printf("两矩阵相乘的结果为:\n"); 
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			sum=0;
			for(t=0;t<m2;t++)
			{
				sum+=A[i][t]*B[t][j];
			}
			printf("%d ",sum);
		}
		printf("\n");	
	}
	return 0;
}
