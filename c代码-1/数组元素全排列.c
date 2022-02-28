#include <stdio.h>
#define  N 100
//void digui(int a[],int n);
int main()
{
	int a[4];
//	digui(a,n);
	int i,j,k,t;
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		
			for(k=0;k<4;k++){
			
				for(t=0;t<4;t++){
					if(t!=k&&t!=i&&t!=j&&j!=i&&k!=j&&k!=i) 
					printf("[%d,%d,%d,%d]\n",a[i],a[j],a[k],a[t]);
					
				}
			}
		}
	}
	return 0;
}
/*void digui(int a[],int n)
{
	int i;
	for(i=0;i<n;i++){
		
	}
}*/
