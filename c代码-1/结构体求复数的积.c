/*求复数之积。利用结构变量求解如下两组复数之积。

za={3,4}, zb={5,6}

za={10,20}, zb={30,40}

**输出格式要求："(%d+%di)*(%d+%di)=" "(%d+%di)\n"
程序运行示例如下：
(3+4i)*(5+6i)=(-9+38i)
(10+20i)*(30+40i)=(-500+1000i)*/
#include <stdio.h>
struct fushu{
	int a;
	int b;
};

int main()
{
	int i,a,b,x1,x2,x3,x4;
	struct fushu za={3,4};
	struct fushu zb={5,6};
	x1=3;
	x2=4;
	x3=5;
	x4=6;
	a=za.a*zb.a-za.b*zb.b;
	b=za.a*zb.b+za.b*zb.a;
	printf("(%d+%di)*(%d+%di)=(%d+%di)\n",x1,x2,x3,x4,a,b);
	struct fushu zc={10,20};
	struct fushu zd={30,40};
	x1=10;
	x2=20;
	x3=30;
	x4=40;
	a=zc.a*zd.a-zc.b*zd.b;
	b=zc.a*zd.b+zc.b*zd.a;
	printf("(%d+%di)*(%d+%di)=(%d+%di)\n",x1,x2,x3,x4,a,b);
}

