#include<stdio.h>
int fun(int a[], int n)
{
	printf("The 3 squares with 3 different digits each are:\n");
	int i, j;
	for(i = 0; i < n-1; i++)
	for(j = i+1; j < n; j++)
	{
		if(a[i]==a[j]||a[j]==0)//让每两个数都比教一次，如果发现有 
		return 0;			//相同的或某个数值为零则这组数有问题 
	}
	if(i == n-2&&j==n-1)	//当i等于倒数第二个数，j等于最后一个数时 
	{						//说明所有的数都遍历了一遍 
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
		{		//这里避免i,j,k相同，并且去掉20,30 
			temp = i*i;			//设置临时变量将i的值赋给他 
			for(int x = 0; x < 9; x++)	//将各个位数分离出来存储在数组之中 
			{
				a[x] = temp%10;
				temp /= 10; 
				if(temp==0&&x==2)
				temp = j*j;
				if(temp==0&&x==5)
				temp = k*k;
			}
			if(fun(a,9)!=0)//一旦找到立马结束程序 
			{
				printf("%d,%d,%d\n",i*i,j*j,k*k);
				return 0;
			} 			
		}
	}
}

