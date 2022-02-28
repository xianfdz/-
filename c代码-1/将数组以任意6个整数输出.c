/*编写程序，把一维数组a 输入任意6个整数。
程序运行示例：
7 4 5 9 1 2↙
7 4 5 9 1 2
2 7 4 5 9 1
1 2 7 4 5 9
9 1 2 7 4 5
5 9 1 2 7 4
4 5 9 1 2 7
**输入格式要求："%d"
**输出格式要求："%d "
在输出每一行的数据后加"\n"
*/
#include <stdio.h>

int main()
{
	int a[6];
	int i,j,h,k;
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=5;i>=1;i--)
	{
		j=i;
		h=0;
		while(h<=5)
		{
			
			printf("%d",a[j]);
			h++;
			j++;
			if(j>5)
			{
				j=0;
			}
		}
		printf("\n");
	}
}
