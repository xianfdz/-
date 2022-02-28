//采用递归方法计算x的n次方。
//**输入格式要求："%d%d" 提示信息："x=? n=?"
//**输出格式要求："%d**%d=%d\n"
//程序运行示例如下：
//x=? n=?2 8
//2**8=256
#include <stdio.h>
int cifang(int x,int n); 
int main()
{
	int x,n;
	int q;
	printf("x=? n=?");
	scanf("%d %d",&x,&n);
	q=cifang(x,n);
	printf("%d**%d=%d",x,n,q);
}
int cifang(int x,int n)
{
	int t=x;
	if(n>1)
	{
     t=x*cifang(x,n-1);		
	}else{
		return t;
	}

}
