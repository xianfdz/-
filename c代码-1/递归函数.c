#include <stdio.h>
int jie(int n);
int main()
{
	int n,t;
	scanf("%d",&n);
	t=jie(n);
	if(t!=0)
	{
		printf("%d",t);
	}
}
int jie(int n)
{
	int ji;
	if(n>1)
	{
		ji=n*jie(n-1);
	}else if(n==1||n==0){
		ji=1;
	}else {
		printf("ÇëÖØÐÂÊäÈë");
		scanf("%d",&n);
		ji=jie(n);
	}
	return ji;
	 
}
