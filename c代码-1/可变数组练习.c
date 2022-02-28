#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int *bian;
	int n;
} Bian;
void bianchang(Bian *p,int num);
int main()
{
	Bian a;
	a.n=5;
	a.bian=(int*)malloc(sizeof(int)*a.n);
	int num;
	scanf("%d",&num);
	bianchang(&a,num);
	free(a.bian);
	a.bian=NULL;
	a.n=0;
	return 0; 
} 
void bianchang(Bian *a,int num)
{
	int* p=(int*)malloc(sizeof((int)(a->n+num)));
	int i;
	for(i=0;i<a->n;i++){
		p[i]=a->bian[i];
	}
	free(a->bian);
	a->bian=p;
	a->n=a->n+num;
}
