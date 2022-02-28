#include<stdio.h>
#include<stdlib.h>
void Reverse_1(LNode &L)
{
	LNode *p;
	p=L.next;
	L.next=NULL;
	while(p!=NULL)
	{
		LNode *tmp;
		tmp=p->next;
		p->next=L.next;
		L.next=p;
		p=tmp;
	}
}
