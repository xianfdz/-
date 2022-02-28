#include<stdio.h>
#define N 7
int main()
{
	int nums[N]={1,2,3,4,5,6,7,};
	int i,j,k,m;
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		m=nums[N-1];
		nums[N-1]=nums[0];
		nums[0]=m;
		for(i=N-1;i>1;i--)
		{
			m=nums[i-1];
			nums[i-1]=nums[i];
			nums[i]=m;
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",nums[i]);
	}
	return 0; 
}
/*#include<stdio.h>
int main()
{
	int nums[7]={1,2,3,4,5,6,7,};
	int k=3,i,t=1,j,h;
	for(i=6;i>=7-k;i--)
	{
		j=i;
		h=0;
		printf("������ת%d��: [",t);
		while(h<=6)
		{
			printf("%d",nums[j]);
			h++;
			j++;
			if(h%7!=0)  printf(",");
			if(j>6)     j=0;
		}
		printf("]\n");
		t++;
	}
} */
