#include<stdio.h>
int main()
{
	//第一种简单情况是nums[]中的数字个数小于或等于4，则只需要判断数字之和是不是等于target 
	int nums[200],target;
	
	int i=-1; 
	printf("nums = ["); 
	do{
		i++;
		scanf("%d",&nums[i]);
		printf(",");
	}while(nums[i]!=-100);//输入-100代表结束 
	getchar();
	printf("], ");
	printf("target = ");
	scanf("%d",&target);
	if(i<3)
	{
		printf("[]");
	}
	else{
		printf("[");
	    int a,b,c,d;
		for(a=0;a<i-3;a++)
			for(b=a+1;b<i-2;b++)
				for(c=b+1;c<i-1;c++)
					for(d=c+1;d<i;d++)
					{
						if(nums[a]+nums[b]+nums[c]+nums[d]==target)
						printf("[%d %d %d %d],",nums[a],nums[b],nums[c],nums[d]);
					}
		getchar();
		printf("]");
	}
	return 0;
}
