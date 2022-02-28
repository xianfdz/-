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
		printf("请输入第%d个学生的信息：\n",i+1);
		printf("请输入学号：");
		scanf("%d",&p->xuehao);
		printf("请输入姓名："); 
		scanf("%s",p->name);
		printf("请输入性别：");
		scanf("%s",p->xingbie);
		sum=0;
		for(j=0;j<3;j++){
			printf("请输入第%d门课成绩：",j+1);
			scanf("%d",&p->score[j]);
			sum+=p->score[j];
		}
		p->aver=1.0*sum/3;
	}
	
	printf("\n\t学号\t姓名\t性别\t三门课成绩\t总平均成绩\t\n");
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
