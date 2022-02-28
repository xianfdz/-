#include<stdio.h>
#include<string.h>
int main()
{
	struct student{
		int number;
		char name[20];
		char sex;
		int age;
		char addr[30];
	};
	struct student *p;
	struct student a[3]={
		{01,"Ren",'m',19,"Shaanxi"},
		{02,"Liu",'f',18,"Han Cheng"}
	};
	p=a;
	a[2].number=03;
	a[2].age=20;
	a[2].sex='m';
	strcpy(a[2].name,"Gou dan");
	strcpy(a[2].addr,"Luxury villa");
	printf("我猜猜，%s的序号是%d，他的性别是%c,嗯，，，没有错！他家住的是%s,年芳%d(doge)\n\n你看我说的对嘛？\n"
	,a[2].name,--(p->number),a[1].sex,a[2].addr,a[2].age); 
	return 0;
}
