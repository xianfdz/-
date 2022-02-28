#include<stdio.h>
#define year 5
#define month 12
int main()
{
	int i,j;
	float jsl[5][12]={{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6 }, 
	               {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3 },
				   {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4 },
				   {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2 },
				   {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
				   };
	printf("年份          平均降水量\n");
	float sum=0,aver,x=0,y=0;
	for(i=0;i<year;i++)
	{
		printf("%d",2010+i);
		for(j=0;j<month;j++)
		{
			sum+=jsl[i][j];	
		}
		printf("           %lf\n",sum);
	} 
		aver=sum/year;
		printf("年平均降水量为：%lf\n",aver);
	for(i=0;i<month;i++)
	{
		
		for(j=0;j<year;j++)
		{
			x+=jsl[j][i];
		}
		y=x/year;
		printf("5年中第%d月的平均降水量为：%lf\n",i+1,y);
	}
	return 0;
} 
