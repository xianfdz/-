#include<stdio.h>
int main()
{
	int n,m,i;
	scanf("%d %d",&n,&m);
	int a[m],b[m];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",a[i],b[i]);
	}
	int sum1=0,sum2=0,k,j,t;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			sum1=a[i]+a[j];
			if(sum1<=n){
				sum2
			} 
		}
	}
	
    return 0;
}
/*
21:45
123��:G8nl HD (65 KBi7s
����֮��
����һ������n������������nums��һ��Ŀ��ֵtarget���ж�nums ���Ƿ�����ĸ�Ԫ��a��b��c��d��ʹ��a+b+c+ d��ֵ��target���?�ҳ��������������Ҳ��ظ�����Ԫ�顣
ע��:���в����԰����ظ�����Ԫ�顣ʾ��1:
����:nums = [1,0,-1,0,-2,2]�� target = 0���:[[-2,-1,1,2],[-2,0,0,2]��[-1,0,0,1]]ʾ��2:
����:nums = [], target = o���:[]

*/
