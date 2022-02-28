/*编写一程序实现以下功能： 分别定义以下函数：
（1）读入班级成绩，输入某班学生某门课的成绩（最多不超过30人），当输入为负数时，提示输入结束。
（2）求平均成绩的函数，函数返回值返回平均成绩，
（3）编写函数统计成绩低于平均分的学生人数的百分比，并返回 ,
(4)主函数中通过调用以上函数求解成绩低于平均分的学生人数的百分比。请提交代码和运行结果。*/
#include <stdio.h>
int shuru(double a[])
{
	int i,cnt=0;
	double t;
	printf("请依次输入每个学生的成绩：\n"); 
	for(i=0;i<30;i++)
	{
		scanf("%lf",&t);
		if(t<0) break;
		else 
		{
			a[i]=t;
			cnt++;
		}	
	}
	return cnt;
}
	
double average(double a[],int cnt)
{
	int i;
	double sum=0;
	for(i=0;i<cnt;i++){
		sum+=a[i];
	}
	return sum/cnt;
}
double di(double a[],double aver,int cnt)
{
	double sum=0;
	int i;
	for(i=0;i<cnt;i++){
		if(a[i]<aver) sum+=1;
	}
	return sum/cnt*100;
} 
int main()
{
	double a[30],aver;
	int cnt;
	cnt=shuru(a);
	aver=average(a,cnt);
	printf("学生的平均成绩为%0.2f\n",aver);
	printf("低于平均分的学生占总数的%0.2f%%\n",di(a,aver,cnt));
}
