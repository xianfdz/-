#include <stdio.h>                           
int main()
{ 
    int  a,b,c,*p,*q,*t; 
    p=&a;
    q=&b; 
	t=&c; 
    printf("���������a��b��ֵ:");
    scanf("%d %d",p,q); 
    *t=*p; 
    *p=*q;
    *q=*t; 
    printf("������a��b��ֵ��a=%d b=%d\n",a,b);
}
