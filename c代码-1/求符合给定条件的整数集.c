#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,j,k;
	int cnt=0;
	i=a;
	while (i<=a+3)
	{
		j=a;
		while(j<=a+3)
		{
			k=a;
			while(k<=a+3)
			{
				if(i!=j&&j!=k&&i!=k)
				{
				printf("%d%d%d",i,j,k);
				cnt++;
					if(cnt%6!=0)
					{
						printf(" ");
					}else{
						printf("\n");
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
}
