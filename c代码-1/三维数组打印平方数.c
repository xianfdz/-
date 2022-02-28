/*1~9组成三个3位数的平方数。将1、2、3、4、5、6、7、8、9九个数字分成三组，
每个数字只能用一次，即每组三个数不许有重复数字，要求每组中的三位数都组成一个平方数
**输入格式要求：提示信息："The 3 squares with 3 different digits each are:\n"
**输出格式要求："%d,%d,%d\n"
程序运行示例如下：
The 3 squares with 3 different digits each are:
361,529,784*/
#include<stdio.h>
int fun(int a[], int n)
{
	
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
	int a[9],i,j,k,temp,x;
	for(i = 13; i <= 31; i++)
	for(j = 13; j <= 31; j++)
	for(k = 13; k <= 31; k++)
	{
		if(i!=j&&i!=k&&j!=k&&i%10!=0&&j%10!=0&&k%10!=0)
		{		//这里避免i,j,k相同，并且去掉20,30 
			temp = i*i;			//设置临时变量将i的值赋给他 
			for( x = 0; x < 9; x++)	//将各个位数分离出来存储在数组之中 
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

/*#include<stdio.h>
int main()
{
	int a[3][9]={{1,2,3,4,5,6,7,8,9,},{1,2,3,4,5,6,7,8,9,},{1,2,3,4,5,6,7,8,9,}};
//	printf("%d\n",a[1][2]);
	int x,i,j,k,n,h=0,cnt=-1;;
	int b[10]={0};
	printf("The 3 squares with 3 different digits each are:\n");
	for(i=10;i<=32;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				for(n=0;n<9;n++)
				{
					if(j!=k&&k!=n&&n!=j&&i*i==j*100+k*10+n)
					{
						b[h++]=i*i;
						cnt++;
					}
				}
			}
		}
	}
	for(i=0;i<=cnt;i++)
	{
		printf("%d\n",b[i]);
	}
} */
/*#include<stdio.h>
int main()
{
	int a[9]={1,2,3,4,5,6,7,8,9,};
	int x,i,j,k,n,h=0;
	int b[10]={0};
	printf("The 3 squares with 3 different digits each are:\n");
		for(j=0;j<9;j++)
		{
			for(k=j;k<9;k++)
			{
				for(n=k;n<9;n++)
				{
					for(i=10;i<=32;i++)
					{
						if(a[j]!=a[k]&&a[k]!=a[n]&&a[n]!=a[j]&&i*i==a[j]*100+a[k]*10+a[n])
						{
							b[h++]=i*i;
						}
					}
				}
			}
		}
	
	printf("%d,%d,%d\n",b[0],b[1],b[2]);
}*/
