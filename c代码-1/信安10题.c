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
	printf("�Ҳ²£�%s�������%d�������Ա���%c,�ţ�����û�д�����ס����%s,�근%d(doge)\n\n�㿴��˵�Ķ��\n"
	,a[2].name,--(p->number),a[1].sex,a[2].addr,a[2].age); 
	return 0;
}
