#include <stdio.h>
struct class{
	int xuehao;
	char name[100];
	char xingbie[10];
	int score[3];
	double aver; 
};
int main()
{
	struct class chengji[5];
	struct class *p=chengji;
	int i,j,sum;
	
	for(i=0;i<5;i++,p++){
		printf("�������%d��ѧ������Ϣ��\n",i+1);
		printf("������ѧ�ţ�");
		scanf("%d",&p->xuehao);
		printf("������������"); 
		scanf("%s",p->name);
		printf("�������Ա�");
		scanf("%s",p->xingbie);
		sum=0;
		for(j=0;j<3;j++){
			printf("�������%d�ſγɼ���",j+1);
			scanf("%d",&p->score[j]);
			sum+=p->score[j];
		}
		p->aver=1.0*sum/3;
	}
	
	printf("\n\tѧ��\t����\t�Ա�\t���ſγɼ�\t��ƽ���ɼ�\t\n");
	for(i=0,p-=5;i<5;i++,p++){
		printf("%13d\t",p->xuehao);
		printf("%s\t",p->name);
		printf("%s\t",p->xingbie);
		for(j=0;j<3;j++)
			printf("%d ",p->score[j]);
		printf("%15.2lf\t\n",p->aver);
	}
	
	return 0;
} 
