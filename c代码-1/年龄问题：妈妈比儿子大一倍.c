#include <stdio.h>
int main()
{
	int year=0;
	int mingAge=12;
	int motherAge=12+24;
	while(motherAge>=mingAge*2)
	{
		if(motherAge==mingAge*2)
		{
			printf("year=%d\nmingAge=%d\nmotherAge=%d\n",year,mingAge,motherAge);
		}
		year++;
		motherAge++;
		mingAge++;
	}
	return 0;
	
}
