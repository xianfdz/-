#include <stdio.h>
int main(int argc,char const *argv[])
{
	FILE *fp=fopen("�Ű�3��.txt","w");
	if(fp){
		int num;
		scanf("%d",&num);
		fprintf(fp,"%d\n",num);
		fclose(fp);
	} else {
		printf("�޷����ļ�");
	}
	return 0;
}
