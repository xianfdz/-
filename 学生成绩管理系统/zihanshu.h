/*typedef struct lianbiao {
	int xuehao;
	char xingming[20];
	char xingbie[10];
	int chengji;
	struct lianbiao *wei;
} lian ;
typedef struct Tou {
	lian* head;
} tou ;*/
void xuanxiang()
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
}
void luru(tou* plist,int* num)
{
	*num=*num+1;
	lian *p=(lian*)malloc(sizeof(lian));//创建节点 
	p->wei=NULL;
	printf("请输入学号(西邮学生学号为8位)：");
	scanf("%d",&p->xuehao);	
	printf("请输入姓名(不超过四个汉字)：");
	scanf("%s",p->xingming);	
	printf("请输入性别（只能输入一个汉字，男/女）：");
	scanf("%s",p->xingbie);
	printf("请输入c语言成绩：");
	scanf("%d",&p->chengji);
	lian *last=plist->head;//寻找最后一个节点，并把新建立的节点连接在最后一个节点上 
	if(last){
		while(last->wei)
			last=last->wei;
		last->wei=p;
	} else plist->head=p;
	system("pause");//暂停，按任意键继续 
	system("cls");//清屏 
	xuanxiang();//打印菜单选项 
}
void shanchu(tou* plist)
{
	int number;
	int i;
	printf("输入需要删除学生的学号：");
	scanf("%d",&number);
	lian* p=NULL,*q=NULL;
	int cnt=0;
	for(p=plist->head;p;q=p,p=p->wei){//q指向目标节点的上一个节点，删除目标节点前，要让q->wei指向目标节点的下一个节点 
		if(p->xuehao==number){
			cnt=1;
			if(q){
				q->wei=p->wei;
			} else{
				plist->head=p->wei;
			}
			free(p);//释放目标节点内存，删除该节点 
			break; 
		} else cnt=0; 
	}
	if(cnt==0) printf("删除失败，未找到该学生信息!\n");
	system("pause");
	system("cls");
	xuanxiang();
}

void xiugai(tou* plist)
{
	int number,cnt=0;
	printf("输入需修改学生的学号：");
	scanf("%d",&number);
	printf("修改姓名请按1；修改性别请按2；修改分数请按3\n");
	char n=getch()-48; 
	lian* p=NULL;
	for(p=plist->head;p;p=p->wei){//遍历链表 
		if(p->xuehao==number){
			cnt=1;
			if(n==1) {
				printf("请输入修改后的姓名："); 
				scanf("%s",p->xingming);
			}
			if(n==2) {
				printf("请输入修改后的性别：");
				scanf("%s",p->xingbie);
			}
			if(n==3) {
				printf("请输入修改后的成绩：");
				scanf("%d",&p->chengji);
			}
		} else cnt=0;
	}
	if(cnt==0) printf("未找到该学生！\n");
	system("pause");
	system("cls");
	xuanxiang();
}
void chazhao(tou* plist)
{
	int number,cnt=0;
	printf("请输入需查找学生的学号：");
	scanf("%d",&number);
	lian* p=NULL;
	for(p=plist->head;p;p=p->wei){
		if(p->xuehao==number){
			cnt=1;
			printf("\t|\t%8d\t|",p->xuehao);
			printf("\t%8s\t|",p->xingming);
			printf("\t%4s\t|",p->xingbie);
			printf("\t%4d\t|\n",p->chengji);
		} else cnt=0;
	}
	if(cnt==0) printf("查找失败，未找到该学生信息！\n");
	system("pause");
	system("cls");
	xuanxiang();
}
void baocun(tou* plist,int* num)
{
	FILE* fp;
	fp=fopen("学生成绩管理系统.txt","w");//打开指定文件，若文件存在，则清空文件内容；若文件不存在，则重新创建一个。然后把数据写入文件 
	if(fp==NULL){
		printf("无法打开文件\n");
		exit(1);
	}
	lian* p=NULL;
	fprintf(fp,"%d ",*num);
	for(p=plist->head;p;p=p->wei){
		fprintf(fp,"%8d\%8s\%4s\%4d\n",p->xuehao,p->xingming,p->xingbie,p->chengji);
	}
	fclose(fp);//关闭文件 
	system("cls");
	printf("数据保存成功！\n"); 
	system("pause");
	system("cls");
	xuanxiang();
}

void duqu(tou* plist,int* num)
{
	system("cls");
	FILE* fp;
	fp=fopen("学生成绩管理系统.txt","r");
	if(fp==NULL){
		printf("无法读取文件\n");
		exit(1);
	}
	
	fscanf(fp,"%d ",num);
	while(*num>0)
	{
		*num=*num-1;
		lian *p=(lian*)malloc(sizeof(lian));
		p->wei=NULL;
		fscanf(fp,"%8d\%8s\%4s\%4d\n",&p->xuehao,p->xingming,p->xingbie,&p->chengji);
		lian *last=plist->head;
		if(last){
			while(last->wei)
				last=last->wei;
			last->wei=p;
		} else plist->head=p;
	}
	
	fclose(fp);
	printf("数据读取成功！\n"); 
	system("pause");
	system("cls");
	xuanxiang();
}
void dayin(tou* plist)
{
	system("cls");
	lian* p;
	if(plist->head){
		printf("\t---------------------------------------------------------------------------------\n");
		for(p=plist->head;p;p=p->wei){

			printf("\t|\t%8d\t|",p->xuehao);
			printf("\t%8s\t|",p->xingming);
			printf("\t%4s\t|",p->xingbie);
			printf("\t%4d\t|\n",p->chengji);
		}
		printf("\t---------------------------------------------------------------------------------\n");
	}else printf("无学生任何数据！\n");
	system("pause");
	system("cls");
	xuanxiang();
}
