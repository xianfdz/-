#include <stdio.h>
int main()
{
	char * a={"董欣然好可爱"};
	int i;
	for(i=0;i<99999;i++)
	{
		printf("%s",a);
		if(i%5==0)
		{
			printf("\n");
			int j;
			for(j=0;j<i;j++)
			{
				printf(" ");
			}

		}
	}
	return 0;
}

