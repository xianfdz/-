#include<stdio.h>
#include<stdlib.h>
typedef struct _lian{
	int shu;
	struct _lian* next;
} Lian;
typedef struct _list{
	Lian* head; 
} List;
void add(List *list,int shu);
void print(List*plist);
int main()
{
	int shu;
	List list;
	list.head=NULL;
	do{
		scanf("%d",&shu);
		if(shu!=-1){
			add(&list,shu);
		}
	}while(shu!=-1);
	
	scanf("%d",&shu);//Ѱ��ָ������ 
	Lian*p;
	int isfind=0;
	for(p=list.head;p;p=p->next){
		if(shu==p->shu){
			printf("�ҵ���\n");
			isfind=1;
			break;
		} else isfind=0;
	}
	if(!isfind) printf("û�ҵ�\n");
	
	print(&list);
		
	Lian*q;//ɾ��ָ������ 
	for(q=NULL,p=list.head;p;q=p,p=p->next){
		if(shu==p->shu){
			if(q){
				q->next=p->next;
			} else{
				list.head=p->next;
			} 
			free(p);
			break;
		} 
	}
	//ɾ���������� 
	for(p=list.head;p;p=q)
	{
		q=p->next;
		free(p);
	}
	printf("\n");
	return 0;
}
void add(List* plist,int shu)//������� 
{
	Lian*p=(Lian*)malloc(sizeof(Lian));
	p->shu=shu;
	p->next=NULL;
	Lian*last=plist->head;
	if(last){
		while(last->next){
			last=last->next;
		}
		last->next=p;
	}else  plist->head=p;
}
void print(List*plist)//������� 
{
	Lian*p=NULL;
	for(p=plist->head;p;p=p->next)
	{
		printf("%d\t",p->shu);
	}
}
