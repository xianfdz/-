// ��д���򣬴Ӵ�С��� 100~999 ֮���������
#include <stdio.h>
int main()
{
	int i=1,j,n;
	for(n=999;n>=100;n--)
	{
		for(j=2;j<n;j++)
		{
			if(n%j==0) 
			{
				i=0;
				break;
			}else i=1;
		}
		if(i) printf("%d\n",n);
	}
	return 0;
}
