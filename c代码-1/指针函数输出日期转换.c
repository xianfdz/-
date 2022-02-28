
#include<stdio.h>
void MonthDay(int year, int yearDay, int *pMonth, int *pDay);
int main()
{
	int year,yearDay,pMonth,pDay; 
	printf("Please enter year, yearDay:");
	scanf("%d %d",&year,&yearDay);
	MonthDay(year,yearDay,&pMonth,&pDay);
	printf("month = %d, day = %d\n",pMonth,pDay);
}
void MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
	int i=1,t=0,sum=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31,};
	if ((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		a[2]=29;
	}
	for(i=1;i<=12;i++)
	{
		sum+=a[i];
		t++;
		if(sum>yearDay)
		{
			break;
		}
	}
	*pDay=yearDay;
	for(i=1;i<t;i++)
		{
			*pDay+=-a[i];
		}
	*pMonth=t;
}/*
#include<stdio.h>
int main()
{
	int year,yearDay,mouth=0,day; 
	printf("Please enter year, yearDay:");
	scanf("%d %d",&year,&yearDay);
	int sum=0,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31,};
	if ((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		a[2]=29;
	}
	for(i=1;i<=12;i++)
	{
		sum+=a[i];
		mouth++;
		if(sum>yearDay)
		{
			break;
		}
	}
	day=yearDay; 
			for(i=1;i<mouth;i++)
		{
			day+=-a[i];
		}
	
	printf("month=%d day=%d",mouth,day);

}*/
