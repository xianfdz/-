#include<stdio.h>
//static int i=1;
int Square(int i)
{
	printf("%d\n",i); 
	return i*i;
	
} 
int main()
{
	int i=0;
	i=Square(1);
	printf("1��%d\n",i);
	for(;i<3;i++)
	{
		static int i=1;
		printf("ѭ��%d\n",i);
		i+=Square(i);
		printf("2��%d\n",i);
	}
	printf("3��%d\n",i);
	return 0;
}
