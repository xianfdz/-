#include<stdio.h> 
//#include<math.h>
//#include<string.h>
int main()
{
    int n,j,i,k,d=1;
    scanf("%d",&n);
        int a[100][1000];//a[i][j]表示掷i个骰子，掷到j的次数。
      //  memset(a,0,sizeof(a)); 
      for(i=0;i<100;i++)
	{
		for(j=0;j<1000;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<n;i++)  d*=6;
        double result[100]; 
        if(n==1){
            for( i=1;i<=6;i++)
               printf("%d\t  %lf\n",i,1.0/6);
        }else{
        for( i=1;i<=6;i++)
		{
            a[1][i]=1;
            result[i]=1.0/6;
        }
        //a[2][2]=0;
        for( i=2;i<=n;i++)
		{
            for(j=i;j<=6*n;j++)
			{
                for( k=1;k<=6;k++)
				{
                    if(j>k)
					{
                    //printf("test1:%d %d\n",j,a[i][j]);
                    a[i][j]+=a[i-1][j-k];
                    //printf("test2:%d %d\n",j,a[i][j]);
                   }
                }
                //a[i][j]有错 
                //printf("%d\n",a[i][j]);
                 result[j]=1.0*a[i][j]/d;
                 //d=(pow(6,n));
            }
        }
        for( j=n;j<=6*n;j++)
             printf("%d\t  %lf\n",j,result[j]);
   		}
    return 0;
}
