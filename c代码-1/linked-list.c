#include "node.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char const *argv[])
{
	//建立链表 
	List list;
	int number;
	list.head=NULL;
	do{
		scanf("%d",&number);
		if(number!=-1){
			add(&list,number); 
		} 
	}while(number!=-1);
	print(&list);
	
	//查找指定链表 
	scanf("%d",&number);
	Node * p;
	int isFound=0;
	for(p=list.head;p;p=p->next){
		if(p->value==number){
			printf("找到了\n");
			isFound=1;
			break;
		}
	}
	if(!isFound){
		printf("没找到\n");
	}
	
	//删除指定链表	 
	Node *q;
	for(q=NULL,p=list.head;p;q=p,p=p->next){
		if(p->value==number){
			if(q){
				q->next=p->next;
			} else{
				list.head=p->next;	
			}
			free(p);
			break;
		}
	}
	//清除链表 
	for(p=list.head;p;p=q){
		q=p->next;
		free(p);
	}
	
	return 0;
}
void add(List * pList,int number)
{
	//add to linked-list
		Node *p=(Node*)malloc(sizeof(Node));
		p->value=number;
		p->next=NULL;
		//find the last
		Node *last=pList->head;
		if(last){
			while(last->next){
				last=last->next;
			}
			//attach 
			last->next=p;
		}else{
			pList->head=p;
		}
}
void print(List * pList)
{
	Node * p;
	for(p=pList->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}
