
/* 
�й��о�����С������������ɹ������
ĳ�˴�90��1��1����ʼ�������������ɹ������
����������Ժ��ĳһ�������ڡ����桱�������ڡ�ɹ����.
**�����ʽҪ��"%d%d%d" ��ʾ��Ϣ��"Enter year/month/day:"
**�����ʽҪ��"He is fishing.\n" "He is sleeping.\n"
��������ʾ�����£�
Enter year/month/day:1990 1 5
He is sleeping.
*/
#include <stdio.h>
#include <string.h>
struct reqi {
	int run[12];
	int ping[12];
};
int nian(int year);
int main()
{
	int year,month,day,sum=0,i,j;
	printf("Enter year/month/day:");
	scanf("%d %d %d",&year,&month,&day);
	struct reqi qwe={  {31,29,31,30,31,30,31,31,30,31,30,31},
					   {31,28,31,30,31,30,31,31,30,31,30,31},
	};
	sum+=nian(year);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		for(i=0;i<month-1;i++)
		{
			sum+=qwe.run[i];
		}
	}else {
		for(i=0;i<month-1;i++)
		{
			sum+=qwe.ping[i];
		}
	}
	sum+=day;
	if(sum%5<=3&&sum%5>0) printf("He is fishing.\n");
	else printf("He is sleeping.\n");
	return 0;
} 
int nian(int year)
{
	int sum=0;
	while(year>1990)
	{
		year--;
		if((year%4==0&&year%100!=0)||year%400==0) sum+=366;
		else sum+=365;
	}
	return sum;
}










