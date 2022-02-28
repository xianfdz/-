
/*
在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），
然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，
则魔术师一定能猜出观众心里想的原数abc是多少。例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443，
而观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。
**输入格式要求："%d"  提示信息："Input a sum:"
**输出格式要求："The sum you calculated is wrong!\n"  "The number is %d\n"
程序运行示例如下：
Input a sum:1999
The number is 443
*/
#include <stdio.h>
int qiuhe(int a,int b,int c);
int Magic(int sum);
int main()
{
	int sum,cai;
	printf("Input a sum:");
	scanf("%d",&sum);
    cai=Magic(sum);
	if(cai==1000)
	{
	    printf("The sum you calculated is wrong!\n");
	}else{
		printf("The number is %d\n",cai);
	}
	return 0;
}
int Magic(int sum)
{
	int i,q,a,b,c;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		c=i%10;
		b=i/10%10;
		//acb、bac、bca、cab、cba//
		q=qiuhe(a,c,b)+qiuhe(b,a,c)+qiuhe(b,c,a)+qiuhe(c,a,b)+qiuhe(c,b,a);
		if(q==sum){
			break;
		}
	}
	return i;
}
int qiuhe(int a,int b,int c)
{
	int m;
	m=a*100+b*10+c;
	return m;
}
    


