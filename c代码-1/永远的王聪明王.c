#include<stdio.h>
#include <string.h> 
int main()
{
	int n,i,j,temp1;
	scanf("%d",&n);
	char kemu[n][100];
	char temp2[100];
	int time[n];
	for(i=0;i<n;i++){
		scanf("%100s",kemu[i]);
		scanf("%d",&time[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(time[i]>time[j]){
				temp1=time[i];
				time[i]=time[j];
				time[j]=temp1;
				strcpy(temp2,kemu[i]);
				strcpy(kemu[i],kemu[j]);
				strcpy(kemu[j],temp2);
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s ",kemu[i]);
	}
	return 0;
}
