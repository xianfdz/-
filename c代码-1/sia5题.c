//2.有一个已经按从小到大的顺序排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
#include <stdio.h>
int main()
{
	int a[6]={2,4,5,12,45,};
	int m,x,i,t;
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
		if(a[i]>x)
		{
			for(m=0;m<5;m++)
			{
				t=a[m];
				a[m]=a[m+1];
				a[m+1]=t;
			}
			a[0]=x;
		}
	}
	
}
