//从键盘任意输入一个整数，编程判断它的奇偶性。

//请上传代码和运行结果截图。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d是偶数",n);
	}else{
		printf("%d是奇数",n); 
	}
	return 0;
}

