#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <conio.h>
#include "jiegouti.h"
#include "zihanshu.h"
int main()
{
	xuanxiang();//��ӡ�˵�ѡ�� 
	char n;
	int num=0;//����num��������������ڵ���������Դ��ڶ�ȡ�ļ������ǿɽ����ʵ��ڵ����� 
	tou list;//����ͷָ�룬ָ������ĵ�һ���ڵ� 
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
	 lian*q=NULL,*p=NULL;//free����������ڵ� ,�ͷ��ڴ�ռ� 
	for(p=list.head;p;p=q){
		q=p->wei;
		free(p);
	}
	return 0; 
}
 
