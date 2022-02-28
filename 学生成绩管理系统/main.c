#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#include "jiegouti.h"
#include "zihanshu.h"
int main()
{
	xuanxiang();//打印菜单选项 
	char n;
	int num=0;//定义num代表所建立链表节点的数量，以此在读取文件内容是可建立适当节点数量 
	tou list;//定义头指针，指向链表的第一个节点 
	list.head=NULL;
	
	while(1)
	{
		n=getch()-48;
		switch(n)
		{
			case 1:
				luru(&list,&num);
				break;
			case 2:
				shanchu(&list);
				break;
			case 3:
				xiugai(&list);
				break;
			case 4:
				chazhao(&list);
				break;
			case 5:
				baocun(&list,&num);
				break;
			case 6:
				duqu(&list,&num);
				break;
			case 7:
				dayin(&list);
				break;
			case 8:
				exit(1);
		}
	}
	 lian*q=NULL,*p=NULL;//free掉所有链表节点 ,释放内存空间 
	for(p=list.head;p;p=q){
		q=p->wei;
		free(p);
	}
	return 0; 
}
 
