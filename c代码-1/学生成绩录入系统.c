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
	printf("            |          1.¼��ѧ����Ϣ             |\n");
	printf("            |          2.ɾ��ѧ����Ϣ             |\n");
	printf("            |          3.�޸�ѧ����Ϣ             |\n");
	printf("            |          4.����ѧ����Ϣ             |\n");
	printf("            |          5.����ѧ����Ϣ             |\n");
	printf("            |          6.��ȡѧ����Ϣ             |\n");
	printf("            |          7.��ӡѧ����Ϣ             |\n");
	printf("            |          8.�˳�ϵͳ                 |\n");
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
