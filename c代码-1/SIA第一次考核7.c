/*5、头插法或尾插法建立单链表
函数接口定义：
LinkList CreateList_Head(LinkList L)//头插法
LinkList CreateList_Tail(LinkList L)//尾插法
*/

#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#define ElemType int 
typedef struct LNode{
	ElemType Data;
	struct LNode *Next;
}LNode,*LinkList;
//你的答案往这里插入
LinkList CreateList_Head(LinkList L)
{
	int number;
	LinkList head=NULL;
	
	do{
		scanf("%d",&number);
		if(number!=9999){
			head->Data=number;
			head->Next=NULL;
			LinkList last=head;
			if(last){
				while(last->Next){
					last=last->Next;
				}
				L->Next=last->Next; 
			}else L->Next=head->Next;
		}
	}while(number!=9999);
	return L;
}
LinkList CreateList_Tail(LinkList L)
{
	int number;
	LinkList tail=NULL;
	do{
		scanf("%d",&number);
		if(number!=9999){
			tail->Data=number;
			tail->Next=NULL;
			LinkList first;
			tail=first;
			if(tail){
				while(tail->Next){
					first=first->Next;
				}
				L->Next=first->Next;
			}else L->Next=tail->Next;
		}
	}while(number!=9999);
		return L;
}
//裁判样例如下
void PrintList(LinkList L)
{
    LinkList p;
    p=L->Next; 
    printf("链表元素如下：\n");
    while(p!=NULL)
    {
        printf("%d ",p->Data);
        p=p->Next;
    }
    printf("\n");
}
int main()
{
	LinkList L;//结构变量L即表示整个链表，也是头指针指向头结点
	printf("尾插法建立单链表，输入值（9999结束）\n"); 
    L=CreateList_Head(L);
    PrintList(L);
    printf("头法建立单链表，输入值（9999结束）\n");
    L=CreateList_Tail(L);
    PrintList(L);
	return 0;
}
