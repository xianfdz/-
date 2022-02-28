#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[100];
	char b[100];
	char c[100];
	int cnt=0,t=1;
	printf("请输入你的中文名字：\n");
	gets(a);
	printf("是否想拍一拍我:（回答 想或不想）\n");
	gets(b);
	if(strcmp(b,"想")==0){
		while(t){
			printf("%s拍了拍我并表示向再被拍一拍  ",a);
			cnt++;
			if(cnt%5==0){
				printf("\n");
			}
			if(cnt<=400&&cnt%200==0){
				printf("是否想停下来:（回答 想或不想）\n");
				gets(c);
				if(strcmp(c,"想")==0){
					t=0;
					printf("拜拜\n");
					break;
				}
			}
			
		}
	}else printf("拜拜\n"); 
	return 0;
}
