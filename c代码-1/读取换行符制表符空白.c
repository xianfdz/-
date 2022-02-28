/*第一个参数ptr表示盛放内容的首地址
 第二个参数size表示每个元素的大小,单位还是字节
  第三个参数nmem表示要读取的元素个数
   第四个参数stream表示的是文件指针*/
#include <stdio.h>
#include<string.h>
#define N 100
void duru(char a[],char b[]);
int main()
{
	char a[N];
	char b[N];
//	gets(a);
    FILE *fp;
    /* 首先打开文件，读写都可以，假设文件中已经有内容为www.dotcpp.com */
    fp = fopen("fp1.txt", "a+");
    /* 读取并显示数据 */
    fread(a, 1, 15, fp);
    printf("%s\n", a);
    fclose(fp);
	duru(a,b);
	puts(b);
	return 0;
}
void duru(char a[],char b[])
{
	char c[N];
	int i,j=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]!=' '&&a[i]!='\n'&&a[i]!='\t'){
			b[j]=a[i];
			j++;
		}
	}
}

