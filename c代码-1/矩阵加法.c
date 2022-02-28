/*输入m×n阶矩阵A和B，用函数编程计算并输出A与B之和。
**输入格式要求："%d,%d"  提示信息："Input m, n:"  "Input %d*%d matrix a:\n"  "Input %d*%d matrix b:\n"
**输出格式要求："Results:\n"  "%6d"
程序运行示例如下：
Input m, n:2,3
Input 2*3 matrix a:
1  2  3 
4  5  6 
Input 2*3 matrix b:
11  12  13 
14  15  16
Results:
    12    14    16
    18    20    22
    */
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Input m,n:");
	scanf("%d,%d",&m,&n);
	int a[m][n];
	int b[m][n];
	printf("Input 2*3 matrix a:\n");
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[j][i]);
		}
	}
/*	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%d  ",a[j][i]);
			if((i+1)*(j+1)==n*m/2) printf("\n");
		}
	}
		*/
	printf("\nInput 2*3 matrix b:\n");
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&b[j][i]);
		}
	}
/*	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%d  ",b[j][i]);
			if((i+1)*(j+1)==n*m/2) printf("\n");
		}
	}*/
	printf("\nResults:\n");
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%6d",a[j][i]+b[j][i]);
			if((i+1)*(j+1)==n*m/2) printf("\n");
		}
	}
}
