#include <stdio.h>
int tiao(int t,int cnt,int A[4],int i)
{
	int j; 
	for(j=0;j<=4;j++)
		{
			t+=A[j];
			cnt++;
			if(t==A[4])
			{
				printf("%d\n",cnt);
				goto END; 
			}else{
				cnt-=1;
				t=A[i];
			}	
		}
		END: ;
}
int main()
{
	int A[5];//={3,1,2,3,6,};
	int i,k,t,j,q,w,e,r;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=4;i++)
	{
		int cnt=0;
		cnt++;
		t=A[i];
		if(t==A[4])
			{
				printf("%d\n",cnt);
				goto END; 
			}
	}
	for(i=0;i<=4;i++)
	{
		int cnt=0;
		cnt++;
		t=A[i];
		tiao(t,cnt,A[4],i);
		goto END;
	}
	for(i=0;i<=4;i++)
	{
		int cnt=0;
		cnt++;
		t=A[i];
		for(j=0;j<=4;j++)
		{
			t+=A[j];
			cnt++;
			for(q=0;q<=4;q++)
			{
				t+=A[q];
				cnt++;
				if(t==A[4])
				{
					printf("%d",cnt);
					goto END;
				}else{
					t=A[i]+A[j];
					cnt=2;
				}
			}
			cnt=1;
			t=A[i];
				
		}
	}
	END: return 0;
} 
