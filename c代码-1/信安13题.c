//��n�����ӣ������������֮��ΪS������n�����г����п��ܵ�Sֵ������Ӧ�ĸ��ʡ�
//����ʹ��C����ʵ�֣�
#include <stdio.h>
int main()
{
	int n,i,j,k=1,t;//iָͶ�Ĵ����� 
	scanf("%d",&n);//jָ���ϵ������ֵĴ��� 		    //kָ���еĿ��ܵ����� 
	double p[100]; 
	for(i=0;i<n;i++)  k*=6;
	printf("%d\n",k);
	int a[100][1000];
	for(i=0;i<100;i++)
	{
		for(j=0;j<1000;j++)
		{
			a[i][j]=0;
		}
	}
	if(n==1)
	{
		for(i=1;i<=6;i++)
		{
			printf("s=%d\t p(%d)=%lf\n",i,i,1.0/6);	
		}
	}else{
	for(i=1;i<=6;i++)
	{
		a[1][i]=1;
		p[i]=1.0/6;
	}
	for(i=2;i<=n;i++)
	{
		for(t=i;t<=6*n;t++)
		{
			for(j=1;j<=6;j++);
			{
				if(t>j) 
					a[i][t]+=a[i-1][t-j];
			}
			p[t]=1.0*a[i][t]/k;
		}
	}
		for(t=n;t<=6*n;t++)
			printf("s=%d\t  p(%d)=%lf\n",t,t,p[t]);
	}	
	return 0;
}
