#include<stdio.h> 
int main ()
{
	int n;
	int a[sizeof(int)+1];
	scanf("%d",&a[sizeof(int)+1]);
	printf("a[%d]=%d\n",sizeof(int)+1,a[sizeof(int)+1]); 	
	int a1[2]={2,3};
	printf("%d ",*(a1+1));
	int d,b=9;
	d=b==10;
	printf("%d %d\n",d,b);
	int *p;
	p=a1;
	printf("%p,%p\n",p,&p);
	putchar('/');
}
