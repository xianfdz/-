/*����һ���Ǹ��������飬�ٶ���ĳ�ʼλ��Ϊ�����һ���±�
�����е�ÿ��Ԫ�ش��������Ǹ�λ���ܹ���Ծ����󳤶ȡ����Ŀ���ǵ������һ���±꣬����ʹ�����ٵ���Ծ����������:
A=[2,3,1,1,4���������һ���±��������Ծ����Ϊ2��(����Ծ1�������±�0��1��Ȼ����Ծ3�����������һ���±ꡣһ������)�����ʽ
��һ������һ��������n(1��n��100)����������һ�У�����n����������ʾ����A��
�� �����ʽ 
/�� ���������ٵ���Ծ������ 
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
	for(i=0;i<=n-1;i++)//������Ծ����Ϊһ�� 
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
	for(i=0;i<=n-1;i++)//������Ծ����Ϊ���� 
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
	for(i=0;i<=n-1;i++)//������Ծ����Ϊ���� 
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
