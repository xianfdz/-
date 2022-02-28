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
123书:G8nl HD (65 KBi7s
四数之和
给定一个包含n个整数的数组nums和一个目标值target，判断nums 中是否存在四个元素a，b，c和d，使得a+b+c+ d的值与target相等?找出所有满足条件且不重复的四元组。
注意:答案中不可以包含重复的四元组。示例1:
输入:nums = [1,0,-1,0,-2,2]， target = 0输出:[[-2,-1,1,2],[-2,0,0,2]，[-1,0,0,1]]示例2:
输入:nums = [], target = o输出:[]

*/
