//输出序列 1，2，5，14，41，...的前 20 项（即从第 2 项开始，每一项为其前 1 项的值乘 3 后减1），要求分 4 行输出，每行 5 个。 
#include <stdio.h>
int main()
{
	int x[20];
	x[0]=1;
	int i; 
	for(i=0;i<19;i++)
	{
		x[i+1]=x[i]*3-1;
		printf("%d ",x[i]);
		if((i+1)%5==0)  printf("\n"); 
	}
	printf("%d\n",x[19]);
	return 0;
}
