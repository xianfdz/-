#include <stdio.h>
int main()
{
	int n,m,i;
	printf("请输入数组a的元素个数："); 
	scanf("%d",&n);
	printf("请输入数组b的元素个数："); 
	scanf("%d",&m);
	int a[n];
	int b[m];
	
	printf("请依次输入数组a的每个元素的值："); 
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	printf("请依次输入数组b的每个元素的值：");  
	for(i=0;i<m;i++) 
		scanf("%d",&b[i]);
	
	int max;
	if(n>m) max=n+1;
	else max=m+1;
	int c[max];
	for(i=0;i<max;i++)
		c[i]=0;
	if(n<m)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]+b[i]>9) 
			{
				c[i]+=a[i]+b[i]-10;
				c[i+1]+=1;
			} else c[i]+=a[i]+b[i];
		}
		for(i=n;i<m;i++){
			if(c[i]+b[i]>9) 
			{
				c[i]+=b[i]-10;
				c[i+1]+=1;
			} else c[i]+=b[i];
		}
			
	} else{
		for(i=0;i<m;i++)
		{
			if(a[i]+b[i]>9) 
			{
				c[i]+=a[i]+b[i]-10;
				c[i+1]+=1;
			} else c[i]+=a[i]+b[i];
		}
		for(i=m;i<n;i++){
			if(c[i]+a[i]>9) 
			{
				c[i]+=a[i]-10;
				c[i+1]+=1;
			} else c[i]+=a[i];
		}
	}
	printf("相加结果为："); 
	if(c[max-1]!=0){
		for(i=0;i<max;i++){
			if(i==0) printf("[%d,",c[i]);
			else if(i==max-1) printf("%d]",c[i]);
			else printf("%d,",c[i]);
	    }
	} else {
		for(i=0;i<max-1;i++){
			if(i==0) printf("[%d,",c[i]);
			else if(i==max-2) printf("%d]",c[i]);
			else printf("%d,",c[i]);
	    }
	}
	
	return 0;
}
