#include <stdio.h>
int main()
{
	int year,month,day,x;
	scanf("%d %d %d",&year,&month,&day);
	switch(month)
	{
		case 1:
			x=day;
			break;
		case 2:
			x=31+day;
			break;
		case 3:
			x=31+28+day;
			break;
		case 4:
			x=31*2+28+day;
			break;
		case 5:
			x=31*2+30+28+day;
			break;
		case 6:
		    x=31*3+30+28+day;
		    break;
		case 7:
		    x=31*3+30*2+28+day;
		    break;
		case 8:
		    x=31*4+30*2+28+day;
		    break;
		case 9:
		    x=31*5+30*2+28+day;
		    break;
		case 10:
		    x=31*5+30*3+28+day;
		    break;
		case 11:
		    x=31*6+30*3+28+day;
		    break;
		case 12:
		    x=31*6+30*4+28+day;
		    break;
	}
	if((year%4==0)&&(year%100!=0)||(year%400==0))
	{
		x++;
	}
	printf("%d",x);
}
