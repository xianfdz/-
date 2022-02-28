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
	
	scanf("%d",&shu);//寻找指定链表 
	Lian*p;
	int isfind=0;
	for(p=list.head;p;p=p->next){
		if(shu==p->shu){
			printf("找到了\n");
			isfind=1;
			break;
		} else isfind=0;
	}
	if(!isfind) printf("没找到\n");
	
	print(&list);
		
	Lian*q;//删除指定链表 
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
	//删除所有链表 
	for(p=list.head;p;p=q)
	{
		q=p->next;
		free(p);
	}
	printf("\n");
	return 0;
}
void add(List* plist,int shu)//添加链表 
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
void print(List*plist)//输出链表 
{
	Lian*p=NULL;
	for(p=plist->head;p;p=p->next)
	{
		printf("%d\t",p->shu);
	}
}
