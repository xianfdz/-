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
	printf("            |          1.¼��ѧ����Ϣ             |\n");
	printf("            |          2.ɾ��ѧ����Ϣ             |\n");
	printf("            |          3.�޸�ѧ����Ϣ             |\n");
	printf("            |          4.����ѧ����Ϣ             |\n");
	printf("            |          5.����ѧ����Ϣ             |\n");
	printf("            |          6.��ȡѧ����Ϣ             |\n");
	printf("            |          7.��ӡѧ����Ϣ             |\n");
	printf("            |          8.�˳�ϵͳ                 |\n");
	printf("             -------------------------------------\n");
}
void luru(tou* plist,int* num)
{
	*num=*num+1;
	lian *p=(lian*)malloc(sizeof(lian));//�����ڵ� 
	p->wei=NULL;
	printf("������ѧ��(����ѧ��ѧ��Ϊ8λ)��");
	scanf("%d",&p->xuehao);	
	printf("����������(�������ĸ�����)��");
	scanf("%s",p->xingming);	
	printf("�������Ա�ֻ������һ�����֣���/Ů����");
	scanf("%s",p->xingbie);
	printf("������c���Գɼ���");
	scanf("%d",&p->chengji);
	lian *last=plist->head;//Ѱ�����һ���ڵ㣬�����½����Ľڵ����������һ���ڵ��� 
	if(last){
		while(last->wei)
			last=last->wei;
		last->wei=p;
	} else plist->head=p;
	system("pause");//��ͣ������������� 
	system("cls");//���� 
	xuanxiang();//��ӡ�˵�ѡ�� 
}
void shanchu(tou* plist)
{
	int number;
	int i;
	printf("������Ҫɾ��ѧ����ѧ�ţ�");
	scanf("%d",&number);
	lian* p=NULL,*q=NULL;
	int cnt=0;
	for(p=plist->head;p;q=p,p=p->wei){//qָ��Ŀ��ڵ����һ���ڵ㣬ɾ��Ŀ��ڵ�ǰ��Ҫ��q->weiָ��Ŀ��ڵ����һ���ڵ� 
		if(p->xuehao==number){
			cnt=1;
			if(q){
				q->wei=p->wei;
			} else{
				plist->head=p->wei;
			}
			free(p);//�ͷ�Ŀ��ڵ��ڴ棬ɾ���ýڵ� 
			break; 
		} else cnt=0; 
	}
	if(cnt==0) printf("ɾ��ʧ�ܣ�δ�ҵ���ѧ����Ϣ!\n");
	system("pause");
	system("cls");
	xuanxiang();
}

void xiugai(tou* plist)
{
	int number,cnt=0;
	printf("�������޸�ѧ����ѧ�ţ�");
	scanf("%d",&number);
	printf("�޸������밴1���޸��Ա��밴2���޸ķ����밴3\n");
	char n=getch()-48; 
	lian* p=NULL;
	for(p=plist->head;p;p=p->wei){//�������� 
		if(p->xuehao==number){
			cnt=1;
			if(n==1) {
				printf("�������޸ĺ��������"); 
				scanf("%s",p->xingming);
			}
			if(n==2) {
				printf("�������޸ĺ���Ա�");
				scanf("%s",p->xingbie);
			}
			if(n==3) {
				printf("�������޸ĺ�ĳɼ���");
				scanf("%d",&p->chengji);
			}
		} else cnt=0;
	}
	if(cnt==0) printf("δ�ҵ���ѧ����\n");
	system("pause");
	system("cls");
	xuanxiang();
}
void chazhao(tou* plist)
{
	int number,cnt=0;
	printf("�����������ѧ����ѧ�ţ�");
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
	if(cnt==0) printf("����ʧ�ܣ�δ�ҵ���ѧ����Ϣ��\n");
	system("pause");
	system("cls");
	xuanxiang();
}
void baocun(tou* plist,int* num)
{
	FILE* fp;
	fp=fopen("ѧ���ɼ�����ϵͳ.txt","w");//��ָ���ļ������ļ����ڣ�������ļ����ݣ����ļ������ڣ������´���һ����Ȼ�������д���ļ� 
	if(fp==NULL){
		printf("�޷����ļ�\n");
		exit(1);
	}
	lian* p=NULL;
	fprintf(fp,"%d ",*num);
	for(p=plist->head;p;p=p->wei){
		fprintf(fp,"%8d\%8s\%4s\%4d\n",p->xuehao,p->xingming,p->xingbie,p->chengji);
	}
	fclose(fp);//�ر��ļ� 
	system("cls");
	printf("���ݱ���ɹ���\n"); 
	system("pause");
	system("cls");
	xuanxiang();
}

void duqu(tou* plist,int* num)
{
	system("cls");
	FILE* fp;
	fp=fopen("ѧ���ɼ�����ϵͳ.txt","r");
	if(fp==NULL){
		printf("�޷���ȡ�ļ�\n");
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
	printf("���ݶ�ȡ�ɹ���\n"); 
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
	}else printf("��ѧ���κ����ݣ�\n");
	system("pause");
	system("cls");
	xuanxiang();
}
