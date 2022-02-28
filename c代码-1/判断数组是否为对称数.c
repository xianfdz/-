/*编写程序：用整数型数组a存放一个8位长整型数（每个数组元素为一个一位整数），判断该数是否为对称数。该数由键盘输入。例如：132231为对称数。
**输入格式要求："%d"
**输出格式要求："no,it is not\n" "yes,it is\n"
程序运行示例1如下：
1
2
3
4
4
3
2
1
输出
yes,it is
程序运行2示例如下：
2
3
4
4
3
2
1
0
输出
no,it is not
*/
#include <stdio.h>
int main()
{
	int q,w,e,r,t,y,u,i;
	int a[8]={q,w,e,r,t,y,u,i,},b[8];
    scanf("%d\n",&q);
    scanf("%d\n",&w);
    scanf("%d\n",&e);
    scanf("%d\n",&r);
    scanf("%d\n",&t);
    scanf("%d\n",&y);
    scanf("%d\n",&u);
    scanf("%d",&i);
    b[1]=i;
    b[2]=u;
    b[3]=y;
    b[4]=t;
    b[5]=r;
    b[6]=e;
    b[7]=w;
    b[8]=q;
	if(a[8]==b[8])
	{
		printf("yes,it is\n");
	}else{
		printf("no,it is not\n");
	}
	return 0;
}
