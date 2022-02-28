//在下面给出的程序中，共有5处错误（包括语法错误和逻辑错误），请找出其中的错误，并改正之。本程序的功能是对a数组中的元素按从大到小的顺序排序。

#include <stdio.h>
#define N 10
int main() 
{
	int a[N]={23,56,3,5,8,34,25,67,45,112,};
	int i,j,k,t;
	for(i=0;i<9;i++)
	{
		k=i;
		for(j=i+1;j<=10;j++)
		{
			if(a[k]<a[j]){
				k=j;
			}
			if(k!=i){
				t=a[k];
				a[k]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
}
