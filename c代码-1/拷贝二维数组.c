#include<stdio.h>
int i,j;
void copy(int  (*a)[3],int  (*b)[3]);
int main()
{
	int a[2][3]={{1,2,3},{3,2,1}};
	int b[2][3]={0,0,0,0,0,0};
	
	copy(a,b);
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//void copy(int a[][3],int  b[][3])
void copy(int a[2][3],int  b[2][3])
//void copy(int (*a)[3],int  (*b)[3])
{
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		//	*(&b[i][j])=*(&a[i][j]);
		*(*(b+i)+j)=*(*(a+i)+j);
		}
	}
}
