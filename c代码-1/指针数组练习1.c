/* 
��ָ����ʵ��3X4�Ķ�ά�����Ԫ�ض����Լ���˶�ά��������ֵ�����ֵ�±� 
�������º���ʵ�֣�
void Input(int (*p)[4],int m, int n); /*����Ԫ�ض��뺯��
int FindMax(int (*p)[4], int m, int n, int *pRow, int *pCol); /*�����ֵ���±꺯��

������ʾ��Ϣ��"Please input your data:\n"
�����ʽҪ���޸�ʽҪ��
�����ʽҪ��"The maximum is %d, which is in row %d, colum %d\n"

������

Please input your data:
����������
3 5 2 7 1 6 12 11 4 10 8 9
���������
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
