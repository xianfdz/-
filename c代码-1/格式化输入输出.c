#include<stdio.h>
int main()
{
	//1.printf
/*	int x,j=213,i,num=0;
	int i1=printf("%5d\n",123);
	printf("%-5d\n",123);//-Ϊ����� 
	printf("%5i\n",-123);//i������d��ͬ 
	printf("%d%n\n",12345,&num);//+��ʾ������ 
	printf("\n%d\n",num);//num��ʾ������ַ����� 
	printf("\n%8e\n",1213);
	printf("%-+5d\n",-123);
	printf("%09d\n",-123);//0����Ҫ��ǰ����0 
	printf("%+-5d\n",123);
	printf("%9.2f\n",-123.2);//����С����С���㹲��λ 
	printf("%+-5d\n",-123);
	printf("%*d\n",j,-123);//��*������*Ϊ����j 
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
	scanf("%*d %d",&x,&num);//*ָ���� 
	printf("%d,%d",x,num); 
	return 0;
}
