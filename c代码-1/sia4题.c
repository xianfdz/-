//1.请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
#include <stdio.h>
int main()
{
	char t,x;
	printf("请输入星期几的第一个字母\n");
	scanf("%c",&t);
	if(t=='M') {
		printf("星期一");
	}
	else if(t=='W') {
		printf("星期三");
	}
	else if(t=='F') {
		printf("星期五");
	}
	else if(t=='T'){
		printf("请输入星期几的第二个字母\n");
		getchar();
		scanf("%c",&x);
		if(x=='u') printf("星期二");
		else if(x=='h'){
			printf("星期四");
		}
	}
	else if(t=='S'){
		printf("请输入星期几的第二个字母\n");
		getchar();
		scanf("%c",&x);
		if(x=='a') printf("星期六");
		else if(x=='u'){
			printf("星期七");
		}
	}
	return 0;
} 
