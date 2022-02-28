#include<stdio.h>
#include<stdlib.h>
typedef struct lianbiao{
	int zhi;
	struct lianbiao *wei;
}Lian;
typedef struct _list{
	Lian* head;
//	Lian* tail;
}List;
void jianli(List*plist,int zhi);
void print(List*plist);
int main()
{
	List list;
	list.head=NULL;
//	list.tail=NULL;
	int zhi;
	do{
		scanf("%d",&zhi);
		if(zhi!=-1)
		jianli(&list,zhi);
	}while(zhi!=-1);
	print(&list);
	scanf("%d",&zhi);
	Lian*p;
	int t=0;
	for(p=list.head;p;p=p->wei)
	{
		if(p->zhi==zhi){
			t=1;
			printf("找到了\n");
			break;
		} else t=0;
	}
	if(!t) printf("没找到\n");
	Lian*q;
	for(q=NULL,p=list.head;p;q=p,p=p->wei)
	{
		if(p->zhi==zhi){
			if(q){
			 q->wei=p->wei;
		}else {
			list.head=p->wei;
		}
		free(p);
		break;
		}
	}
	for(p=list.head;p;p=q){
		q=p->wei;
		free(p);
	}
	
	return 0;
}
void jianli(List*plist,int zhi)
{
			Lian *p=(Lian*)malloc(sizeof(Lian));
			p->zhi=zhi;
			p->wei=NULL;
			Lian *last=plist->head;
			if(last) {
				while(last->wei){
					last=last->wei;
				}
				last->wei=p;
			}else plist->head=p;
}
void print(List*plist)
{
	Lian *p;
	for(p=plist->head;p;p=p->wei)
	{
		printf("%d\t",p->zhi); 
	}
	printf("\n");
}
