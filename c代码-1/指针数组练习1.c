/* 
用指针编程实现3X4的二维数组的元素读入以及求此二维数组的最大值及最大值下标 
请用以下函数实现：
void Input(int (*p)[4],int m, int n); /*数组元素读入函数
int FindMax(int (*p)[4], int m, int n, int *pRow, int *pCol); /*求最大值及下标函数

输入提示信息："Please input your data:\n"
输入格式要求：无格式要求
输出格式要求："The maximum is %d, which is in row %d, colum %d\n"

样例：

Please input your data:
输入样例：
3 5 2 7 1 6 12 11 4 10 8 9
输出样例：
The maximum is 12, which is in row 1, colum 2

*/ 
#include <stdio.h>
void Input(int (*p)[4],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",(p[i]+j));
		}
	}
}
int FindMax(int (*p)[4],int m,int n,int *pRow,int*pCol)
{
	int i,j,max=*(p[0]);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(*(p[i]+j)>max){
				max=*(p[i]+j);
				*pRow=i;
				*pCol=j;
			}
		}
	}
	return max;
}
int main()
{
	int m=3,n=4,max,row=0,col=0,i,j;
	int p[m][n];
	printf("Please input your date:\n");
	Input(p,m,n);
	max=FindMax(p,m,n,&row,&col);
	printf("The maximum is %d, which is in row %d, colum %d\n",max,row,col);
	return 0;
}
