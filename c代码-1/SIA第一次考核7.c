/*5��ͷ�巨��β�巨����������
�����ӿڶ��壺
LinkList CreateList_Head(LinkList L)//ͷ�巨
LinkList CreateList_Tail(LinkList L)//β�巨
*/

#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>
#define ElemType int 
typedef struct LNode{
	ElemType Data;
	struct LNode *Next;
}LNode,*LinkList;
//��Ĵ����������
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
//������������
void PrintList(LinkList L)
{
    LinkList p;
    p=L->Next; 
    printf("����Ԫ�����£�\n");
    while(p!=NULL)
    {
        printf("%d ",p->Data);
        p=p->Next;
    }
    printf("\n");
}
int main()
{
	LinkList L;//�ṹ����L����ʾ��������Ҳ��ͷָ��ָ��ͷ���
	printf("β�巨��������������ֵ��9999������\n"); 
    L=CreateList_Head(L);
    PrintList(L);
    printf("ͷ����������������ֵ��9999������\n");
    L=CreateList_Tail(L);
    PrintList(L);
	return 0;
}
