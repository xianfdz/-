#include <stdio.h>
#include <stdlib.h>
typedef struct Lianbiao{
	int zhi;
	struct Lianbiao* wei;
}lian;
typedef struct Tou{
	lian * head;
}tou;
void jianli(tou* plist);
int main()
{
	tou list;
	list.head=NULL;
	jianli(&list);
	
	lian*p=NULL,*q=NULL;//��ӡ���� 
	for(p=list.head;p;p=p->wei)
		printf("%d ",p->zhi);
		
	for(p=list.head;p;p=q) 
	{
		q=p->wei;
		free(p);//ɾ������
	}
	
	return 0;
}
void jianli(tou*plist)//�������� 
{
	int n;
	scanf("%d",&n);
	while(n!=-1)
	{
		lian *p=(lian*)malloc(sizeof(lian));
		
		p->zhi=n;
		p->wei=NULL;
		if(plist->head){
			p->wei=plist->head; 
			plist->head=p;
		} else {
			plist->head=p;
		}
		scanf("%d",&n);
	}
}
