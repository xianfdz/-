
//������������x,y,z���������������С���������
#include<stdio.h>
int main()
{
	int x,y,z,i,j,t;
	scanf("%d %d %d",&x,&y,&z);
	int a[3]={x,y,z};
	for(i=0;i<2;i++)
	{
		for(j=i;j<2;j++)
		{
			if(a[i]>a[j+1]){
				t=a[i];
				a[i]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("%d %d %d",a[0],a[1],a[2]);
	return 0;
}
