/* 
汉诺塔（Tower of Hanoi）,又称河内塔，是一个源于印度古老传说的益智玩具。
大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。
大梵天命令婆罗门把圆盘从下面开始按照大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，
在三根柱子之间一次只能移动一个圆盘。
当n=1时：移动1 方向 A—>C; 移动一次
当n=2时：移动1 方向 A—>B;
移动2 方向 A—>C;
移动1 方向 B—>C; 移动三次
当n=3时：移动1 方向 A—>C;
移动2 方向 A—>B;
移动1 方向 C—>B;
移动3 方向 A—>C;
移动1 方向 B—>A;
移动2 方向 B—>C;
移动1 方向 A—>C; 移动七次*/ 
#include <stdio.h>
int hanoi(int n, char a, char b, char c);
int cnt;
int main() 
{
	int n;
	while( scanf ("%d", &n)) {
		cnt=0;
		cnt=hanoi(n, 'A', 'B', 'C');
		printf("移动了%d次\n",cnt);
	}
	return 0;
}
int hanoi(int n, char a, char b, char c)
{
	if(n==1){
		printf("%c->%c\n",a,c);
		cnt++;
	}else{
		hanoi(n-1,a,c,b);
		printf("%c->%c\n",a,c);
		cnt++;
		hanoi(n-1,b,a,c);
	}
	return cnt;
	
}
