#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int date;
 struct Node * pNext; 
};
struct Node* creat_list(struct Node * pHead);//�������� 
int main()
{
 struct Node * pHead=NULL;//�൱�����Ǹտ�ʼ����һ��ָ��һ�������Ƚ���ָ��NULL 
 pHead=creat_list(pHead);
 //traverse_list(pHead);
 
 struct Node *q=NULL,*p=NULL;
 for(p=pHead->pNext;p;p=p->pNext)//forѭ����ӡ���������нڵ� 
 	printf("%d ",p->date);
 
 for(p=pHead->pNext;p;p=q)//free����������ڵ㣬ɾ������
 {
 	q=p->pNext;
 	free(p); 
 }
 
 return 0;
}
struct Node* creat_list(struct Node * pHead)//�Ӻ����β�����Ϊ�ṹ��ָ�� ������ֵ����Ҳ�ǽṹ��ָ�� 
{
 struct Node * Head=(struct Node *)malloc(sizeof(struct Node));//�����Ҫ��ʼ����ͷ����ˣ��ȸ�������ռ� 
 Head->pNext=NULL;//��һ�ε�ͷ�����ָ��NULL 
 
 int x;//�����������Ҫ����Ľڵ��� 
 while(scanf("%d",&x)&&x!=-1)//-1��� �����д����Ϊ��Ҫ����һ����������ѭ���� 
 {
  struct Node * pNew=(struct Node *)malloc(sizeof(struct Node));//����Ҫ��ʼͷ�巨����ڵ��� 
  pNew->date=x;//�½ڵ�������� 
  pNew->pNext=Head->pNext;//�½ڵ��ָ������ͷ����ָ������ֵ��ע�����ﲻ�ܸ�ֵ��17�е�NULL����Ϊ����ѭ�����ֲ���ÿһ�ζ��Ǵ�ͷ��㸳ֵ 
  Head->pNext=pNew; //ͷ����ָ����ҲҪ�ı��������½ڵ㸳ֵ���� 
 }
 return Head;//����ͷָ�� 
 
} 
