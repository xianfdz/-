#include <stdio.h>
#define number 100
int main()
{
	int n=0,m=0,i,t=1,p=1,max=0;
	int a[number]={0};
	int b[number]={0};
	printf("��������������a��ÿ��Ԫ�ص�ֵ(�������С��0ʱֹͣ���������һ��������������)��");
	while(t>0)
	{
		scanf("%d",&t);
		if(t>=0) {
			a[n]=t;
			n++;
			max++;
		}	
	} 
	printf("��������������b��ÿ��Ԫ�ص�ֵ(�������С��0ʱֹͣ���������һ��������������)��");
	while(p>0)
	{
		scanf("%d",&p);
		if(p>=0) {
			b[m]=p;
			m++;
			max++;
		}
	} 
	
	int c[100]={0};
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
	printf("����a������b��ӽ��Ϊ��"); 
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
