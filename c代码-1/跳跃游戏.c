/*给定一个非负整数数组，假定你的初始位置为数组第一个下标
数组中的每个元素代表你在那个位置能够跳跃的最大长度。你的目标是到达最后一个下标，并且使用最少的跳跃次数。例如:
A=[2,3,1,1,4，到达最后一个下标的最少跳跃次数为2。(先跳跃1步，从下标0到1，然后跳跃3步，到达最后一个下标。一共两次)输入格式
第一行输入一个正整数n(1≤n≤100)，接下来的一行，输入n个整数，表示数组A。
利 输出格式 
/年 最后输出最少的跳跃次数。 
Sample Input

5
3 1 111
*/
/*#include <stdio.h>
int main()
{
	int n,A[n];
	scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++)
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
	
} */
#include <stdio.h>
int main()
{
	int n,i,k,t,j,q;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=n-1;i++)//最少跳跃步数为一次 
	{
		int cnt=0;
		cnt++;
		t=A[i];
		if(t==n-1)
			{
				printf("%d\n",cnt);
				goto END; 
			}
	}
	for(i=0;i<=n-1;i++)//最少跳跃步数为两次 
	{
		int cnt=0;
		cnt++;
		t=A[i];
		for(j=0;j<=4;j++)
		{
			t+=A[j];
			cnt++;
			if(t==n-1)
			{
				printf("%d\n",cnt);
				goto END; 
			}else{
				cnt=1;
				t=A[i];
			}	
		}
	}
	for(i=0;i<=n-1;i++)//最少跳跃步数为三次 
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
				if(t==n-1)
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
