//请编写程序，提交代码和运行结果截图。

//输入表中每个输入地从2/26日到3/19确诊病例的个数，统计并输出每个输入地累计确诊的总个数，
//以及13个输入地累计确诊的总个数
#include <stdio.h>
int main()
{
	int x,n,i,sum,t,h,j;
	t=0;
	for(i=1;i<=13;i++)
	{
		sum=0;
		switch(i)
		{
		    case 1:
			printf("请依次输入北京从2/26日到3/19确诊病例的个数：\n");
			break;
			case 2:
			printf("请依次输入甘肃从2/26日到3/19确诊病例的个数：\n");
			break; 
			case 3:
			printf("请依次输入广东从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 4:
			printf("请依次输入上海从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 5:
			printf("请依次输入浙江从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 6:
			printf("请依次输入山东从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 7:
			printf("请依次输入云南从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 8:
			printf("请依次输入陕西从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 9:
			printf("请依次输入黑龙江从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 10:
			printf("请依次输入四川从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 11:
			printf("请依次输入广西从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 12:
			printf("请依次输入河南从2/26日到3/19确诊病例的个数：\n"); 
			break;
			case 13:
			printf("请依次输入宁夏从2/26日到3/19确诊病例的个数：\n"); 
			break;
		}
		for(h=1;h<=23;h++)
		{
			scanf("%d",&n);
			sum+=n;
			t+=n;
	    	}
		switch(i)
		    {
		    	case 1:
				printf("北京累计确诊的总个数为：%d\n",sum);
				break;
				case 2:
				printf("甘肃累计确诊的总个数为：%d\n",sum);
				break; 
				case 3:
				printf("广东累计确诊的总个数为：%d\n",sum); 
				break;
				case 4:
				printf("上海累计确诊的总个数为：%d\n",sum); 
				break;
				case 5:
				printf("浙江累计确诊的总个数为：%d\n",sum); 
				break;
				case 6:
				printf("山东累计确诊的总个数为：%d\n",sum); 
				break;
				case 7:
				printf("云南累计确诊的总个数为：%d\n",sum); 
				break;
				case 8:
				printf("陕西累计确诊的总个数为：%d\n",sum); 
				break;
				case 9:
				printf("黑龙江累计确诊的总个数为：%d\n",sum); 
				break;
				case 10:
				printf("四川累计确诊的总个数为：%d\n",sum); 
				break;
				case 11:
				printf("广西累计确诊的总个数为：%d\n",sum); 
				break;
				case 12:
				printf("河南累计确诊的总个数为：%d\n",sum); 
				break;
				case 13:
				printf("宁夏累计确诊的总个数为：%d\n",sum); 
				break;
			}
		}
	printf("13个输入地累计确诊的总个数为:%d",t);
}





