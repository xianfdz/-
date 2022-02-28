/*利用之前的循环实验所使用的凯撒密码加密文件内容，要求加密后内容存
入新的文件，将加密后的文件解密，再次存入新的文件中，默认凯撒密码的秘
钥为 3。*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	int key,n;
	printf("请输入密钥：\nkey=");
	scanf("%d",&key);
	char c;
	do{
		
		printf("请输入数字1表示加密，输入数字2表示解密，输入其他数字退出程序：\n");
		scanf("%d",&n);
		if(n==1){
			fp1=fopen("文件1.txt","w");
			if(fp1==NULL){
				printf("打开文件失败");
				exit(0); 
			}
			printf("请输入要加密文件的内容：\n");
			char a[100];
			getchar();
			gets(a);
			fprintf(fp1,"%s",a);
			fclose(fp1);
			
			printf("文件保存成功！\n");
			fp1=fopen("文件1.txt","r");
			fp2=fopen("文件2.txt","w"); 
			if(fp2==NULL){
				printf("打开文件失败");
				exit(0); 
			}
		
			do
			{
				c=fgetc(fp1);
				if(c!=-1)
				{
					if(c!=' '){
						int i;
						for(i=0;i<key;i++)
						{
							if(c=='z') c='a';
							else if(c=='Z') c='A';
							else c++;
						}
						fprintf(fp2,"%c",c);
					} else fprintf(fp2,"%c",c);
				}
			}while(c!=-1);
			fclose(fp1);
			fclose(fp2);
			printf("加密内容已存入新文件\n");
			
			
		}else if(n==2){
			fp2=fopen("文件2.txt","r");
			fp3=fopen("文件3.txt","w");
			if(fp2==NULL||fp3==NULL){
				printf("打开文件失败");
				exit(0);
			}
		
			do
			{
				c=fgetc(fp2);
				if(c!=-1)
				{
					if(c!=' ')
					{
						int i;
						for(i=0;i<key;i++)
						{
							if(c=='a') c='z';
							else if(c=='A') c='Z';
							else c--;	
						}
						fprintf(fp3,"%c",c);
					} else  fprintf(fp3,"%c",c);
				}
			}while(c!=-1);
			fclose(fp2);
			fclose(fp3);
			printf("解密内容已存入新文件\n");
			
		} else {
			printf("退出程序");
			break; 
		} 
	}while(1);
	return 0; 
} 
