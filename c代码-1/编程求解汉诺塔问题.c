/*编程求解汉诺塔问题。
汉诺塔（Hanoi）是必须用递归方法才能解决的经典问题。它来自于印度神话。
上帝创造世界时作了三根金刚石柱子，在第一根柱子上从下往上按大小顺序摞着64片黄金圆盘，
如图7-3所示。上帝命令婆罗门把圆盘从下面开始按大小顺序重新摆放到第二根柱子上，并且规定，
每次只能移动一个圆盘，在小圆盘上不能放大圆盘。有人预言说，这件事完成时宇宙会在一瞬间闪电式毁灭，也有人相信婆罗门至今仍在一刻不停地搬动着圆盘。
**输入格式要求："%d" 提示信息："Input the number of disks:"
**输出格式要求："Steps of moving %d disks from A to B by means of C:\n" "Move %d: from %c to %c\n"
程序运行示例如下：
Input the number of disks:3
Steps of moving 3 disks from A to B by means of C:
Move 1: from A to B
Move 2: from A to C
Move 1: from B to C
Move 3: from A to B
Move 1: from C to A
Move 2: from C to B
Move 1: from A to B
*/
#include <stdio.h>
int n;
void hannuo(int n,char a,char b,char c)
{   
    if (n == 1) {
        printf("Move %d: from %c to %c\n",n,a,c);
    }
    else
    {
        hannuo(n-1,a,c,b);
	    printf("Move %d: from %c to %c\n",n,a,c);
        hannuo(n-1,b,a,c);
    }
}
int main ( )
{
	printf("Input the number of disks:");
	scanf("%d",&n);
	printf("Steps of moving %d disks from A to B by means of C:\n" ,n);
    hannuo(n,'A','C','B');
    
}

