#include<stdio.h>
int main()
{
    long long n,i;
    scanf("%lld",&n);
    long long a[n-1],b[n-1];
    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        scanf("%lld",&b[i]);
    }
    long long money=a[0],meili=b[0];
    for(i=1;i<n-1;i=i+2)
    {
       if(i!=n-2){
       
            if(meili<b[i]||meili<b[i+1])
	        {
	            if(b[i]>b[i+1]) 
	            {
	                meili=b[i];
	                money+=a[i];
	            }else if(b[i]<b[i+1]){
	                meili=b[i+1];
	                money+=a[i+1];
	            }else {
	                if(a[i]>a[i+1]){
	                    money+=a[i+1];
	                    meili=b[i+1];
	                } 
	                else {
	                    meili=b[i];
	                    money+=a[i];
	                }
	            }
	        }
	    } else {
	          if(meili<b[i+1]) {
	           	money+=a[i+1];
	           	break;
	           }
	       	} 
    }
	
    printf("%lld",money);
    return 0;
}
/*#include<stdio.h>
int main()
{
    printf("\"xi\\nan\\min\\zu\\da\\xue,zhen\\mei!\"");
    return 0;
} */
/*#include <stdio.h>
#include <math.h>
int main()
{
	long long x,i;
	scanf("%lld",&x);
//	long long a[x+1];
	long long q,w,e,r,t,y=pow(10,9)+7;
	for(i=0;i<x+1;i++)
	{
		if(i==0) t=q=0;
		else if(i==1) t=w=1;
		else if(i==2) t=e=2;
		else if(i==3) t=r=3;
		else //a[i]=a[i-1]+a[i-3];
			{
				t=(r+w)%y;
				w=e;
				e=r;
				r=t;
			}
	}
	
	printf("%lld",t%y);
	return 0;
}*/
