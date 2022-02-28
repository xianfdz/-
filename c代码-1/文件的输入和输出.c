#include <stdio.h>
int main(int argc,char const *argv[])
{
	FILE *fp=fopen("信安3题.txt","w");
	if(fp){
		int num;
		scanf("%d",&num);
		fprintf(fp,"%d\n",num);
		fclose(fp);
	} else {
		printf("无法打开文件");
	}
	return 0;
}
