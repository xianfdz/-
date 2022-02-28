#include<stdio.h>
int main()
{

//	int i,j;
/*	char a[5][10];//不能直接用数组名赋值，因为数组名代表数组的首地址，是地址常量，不能改变地址。 
	char *p[5];
	for(i=0;i<5;i++){
		scanf("%s",a[i]);
		p[i]=a[i];
	}
	for(i=0;i<5;i++){
		printf("%s\n",p[i]); 
	}*/
/*	char b[3][10];
	for(i=0;i<3;i++){
		scanf("%s",*(b+i));
	//	scanf("%s",b+i);
	}
	for(i=0;i<3;i++){
		printf("%s ",*(b+i)); 
		printf("%s ",b+i); 
		printf(" 第%d次 %c  ",i,*(*(b+i)+i));
		
	}*/ 
	int i;
	char *b[3][10];
	for(i=0;i<3;i++){
		scanf("%s",b[i]);
		printf("%s ",b[i]);
	}
	for(i=0;i<3;i++){
//		 
		printf(" 第%d个字符串中 %c  ",i+1,*(*(*(b+1)+i)));
	}
	
}
