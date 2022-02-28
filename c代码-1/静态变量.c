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
	printf("1ºÅ%d\n",i);
	for(;i<3;i++)
	{
		static int i=1;
		printf("Ñ­»·%d\n",i);
		i+=Square(i);
		printf("2ºÅ%d\n",i);
	}
	printf("3ºÅ%d\n",i);
	return 0;
}
