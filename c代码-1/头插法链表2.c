#include<stdio.h>
#include<stdlib.h>
struct Node
{
 int date;
 struct Node * pNext; 
};
struct Node* creat_list(struct Node * pHead);//函数声明 
int main()
{
 struct Node * pHead=NULL;//相当于我们刚开始定义一个指针一样，都先将他指向NULL 
 pHead=creat_list(pHead);
 //traverse_list(pHead);
 
 struct Node *q=NULL,*p=NULL;
 for(p=pHead->pNext;p;p=p->pNext)//for循环打印出链表所有节点 
 	printf("%d ",p->date);
 
 for(p=pHead->pNext;p;p=q)//free掉所有链表节点，删除链表
 {
 	q=p->pNext;
 	free(p); 
 }
 
 return 0;
}
struct Node* creat_list(struct Node * pHead)//子函数形参类型为结构体指针 ，返回值类型也是结构体指针 
{
 struct Node * Head=(struct Node *)malloc(sizeof(struct Node));//在这就要开始创建头结点了，先给他分配空间 
 Head->pNext=NULL;//第一次的头结点先指向NULL 
 
 int x;//这个就是我们要输入的节点了 
 while(scanf("%d",&x)&&x!=-1)//-1这个 就随便写，因为总要输入一个数来跳出循环吧 
 {
  struct Node * pNew=(struct Node *)malloc(sizeof(struct Node));//在这要开始头插法插入节点啦 
  pNew->date=x;//新节点的数据区 
  pNew->pNext=Head->pNext;//新节点的指针区被头结点的指针区赋值，注意这里不能赋值第17行的NULL，因为他在循环，又不是每一次都是从头结点赋值 
  Head->pNext=pNew; //头结点的指针区也要改变啦，用新节点赋值给她 
 }
 return Head;//返回头指针 
 
} 
