#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[100];
	char b[100];
	char c[100];
	int cnt=0,t=1;
	printf("����������������֣�\n");
	gets(a);
	printf("�Ƿ�����һ����:���ش� ����룩\n");
	gets(b);
	if(strcmp(b,"��")==0){
		while(t){
			printf("%s�������Ҳ���ʾ���ٱ���һ��  ",a);
			cnt++;
			if(cnt%5==0){
				printf("\n");
			}
			if(cnt<=400&&cnt%200==0){
				printf("�Ƿ���ͣ����:���ش� ����룩\n");
				gets(c);
				if(strcmp(c,"��")==0){
					t=0;
					printf("�ݰ�\n");
					break;
				}
			}
			
		}
	}else printf("�ݰ�\n"); 
	return 0;
}
