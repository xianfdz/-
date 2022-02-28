#include<stdio.h>
int main()
{
	//1.printf
/*	int x,j=213,i,num=0;
	int i1=printf("%5d\n",123);
	printf("%-5d\n",123);//-为左对齐 
	printf("%5i\n",-123);//i作用与d相同 
	printf("%d%n\n",12345,&num);//+显示正负号 
	printf("\n%d\n",num);//num表示输出的字符个数 
	printf("\n%8e\n",1213);
	printf("%-+5d\n",-123);
	printf("%09d\n",-123);//0代表要在前面填0 
	printf("%+-5d\n",123);
	printf("%9.2f\n",-123.2);//加上小数和小数点共九位 
	printf("%+-5d\n",-123);
	printf("%*d\n",j,-123);//有*，代表*为变量j 
	printf("%hh+-5d\n",12);
	printf("%h+-5d\n",12);
	printf("%+-5hhd\n",12);
	printf("%h+-5Ld\n",12);
	printf("%+-5Ld\n",12);
	printf("%h+-5d\n",12);
	printf("%hhd\n",(char)1213);
	int i2=scanf("%d",&x); 
	int i3=printf("%d\n",x); 
	printf("%dty%n\n",12345,&num);
	printf("\n%d\n",num);
	printf("%d,%d,%d",i1,i2,i3);*/
	//2.scanf
	int x=3,j=213,i,num=0;
	char a[10];
	scanf("%3s",a);
	puts(a);
	scanf("%*d %d",&x,&num);//*指跳过 
	printf("%d,%d",x,num); 
	return 0;
}
