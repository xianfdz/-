#include <stdio.h>
#include <stdlib.h>
void luru();
void shanchu();
void xiugai();
void chazhao();
void baocun();
void duqu();
void dayin();
int main()
{
	printf("             -------------------------------------\n");
	printf("            |          1.录入学生信息             |\n");
	printf("            |          2.删除学生信息             |\n");
	printf("            |          3.修改学生信息             |\n");
	printf("            |          4.查找学生信息             |\n");
	printf("            |          5.保存学生信息             |\n");
	printf("            |          6.读取学生信息             |\n");
	printf("            |          7.打印学生信息             |\n");
	printf("            |          8.退出系统                 |\n");
	printf("             -------------------------------------\n");
	int n;
	
	do
	{
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				luru();
				break;
			case 2:
				shanchu();
				break;
			case 3:
				xiugai();
				break;
			case 4:
				chazhao();
				break;
			case 5:
				baocun();
				break;
			case 6:
				duqu();
				break;
			case 7:
				dayin();
				break;
			case 8:
				exit(0);
		}
	}while(n!=8);
	 
	return 0; 
} 
