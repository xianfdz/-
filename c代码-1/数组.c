#include<stdio.h>
int fun(int a[], int n)
{
	printf("The 3 squares with 3 different digits each are:\n");
	int i, j;
	for(i = 0; i < n-1; i++)
	for(j = i+1; j < n; j++)
	{
		if(a[i]==a[j]||a[j]==0)//��ÿ���������Ƚ�һ�Σ���������� 
		return 0;			//��ͬ�Ļ�ĳ����ֵΪ���������������� 
	}
	if(i == n-2&&j==n-1)	//��i���ڵ����ڶ�������j�������һ����ʱ 
	{						//˵�����е�����������һ�� 
		return 1;
	}
}
main()
{
	int a[9],i,j,k,temp;
	for(i = 13; i <= 31; i++)
	for(j = 13; j <= 31; j++)
	for(k = 13; k <= 31; k++)
	{
		if(i!=j&&i!=k&&j!=k&&i%10!=0&&j%10!=0&&k%10!=0)
		{		//�������i,j,k��ͬ������ȥ��20,30 
			temp = i*i;			//������ʱ������i��ֵ������ 
			for(int x = 0; x < 9; x++)	//������λ����������洢������֮�� 
			{
				a[x] = temp%10;
				temp /= 10; 
				if(temp==0&&x==2)
				temp = j*j;
				if(temp==0&&x==5)
				temp = k*k;
			}
			if(fun(a,9)!=0)//һ���ҵ������������ 
			{
				printf("%d,%d,%d\n",i*i,j*j,k*k);
				return 0;
			} 			
		}
	}
}

