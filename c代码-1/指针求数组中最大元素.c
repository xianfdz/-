#include <stdio.h>
void minmax(int a[],int len,int *min,int *max);
int main()
{
	int a[]={12,3,45,56,1233,34,};
	printf("%lu\n",a);
	int max,min;
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("%d %d",min,max);
	return 0;
}
void minmax(int a[],int len,int *min,int *max )
{
	int i;
	*min=*max=a[0];
	for(i=1;i<=len-1;i++)
	{
		if(a[i]<*min)
		{
			*min=a[i];
		}else if(a[i]>*max)
		{
			*max=a[i];
		}
	}

}
