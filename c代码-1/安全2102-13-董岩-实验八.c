/*����֮ǰ��ѭ��ʵ����ʹ�õĿ�����������ļ����ݣ�Ҫ����ܺ����ݴ�
���µ��ļ��������ܺ���ļ����ܣ��ٴδ����µ��ļ��У�Ĭ�Ͽ����������
ԿΪ 3��*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	int key,n;
	printf("��������Կ��\nkey=");
	scanf("%d",&key);
	char c;
	do{
		
		printf("����������1��ʾ���ܣ���������2��ʾ���ܣ��������������˳�����\n");
		scanf("%d",&n);
		if(n==1){
			fp1=fopen("�ļ�1.txt","w");
			if(fp1==NULL){
				printf("���ļ�ʧ��");
				exit(0); 
			}
			printf("������Ҫ�����ļ������ݣ�\n");
			char a[100];
			getchar();
			gets(a);
			fprintf(fp1,"%s",a);
			fclose(fp1);
			
			printf("�ļ�����ɹ���\n");
			fp1=fopen("�ļ�1.txt","r");
			fp2=fopen("�ļ�2.txt","w"); 
			if(fp2==NULL){
				printf("���ļ�ʧ��");
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
			printf("���������Ѵ������ļ�\n");
			
			
		}else if(n==2){
			fp2=fopen("�ļ�2.txt","r");
			fp3=fopen("�ļ�3.txt","w");
			if(fp2==NULL||fp3==NULL){
				printf("���ļ�ʧ��");
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
			printf("���������Ѵ������ļ�\n");
			
		} else {
			printf("�˳�����");
			break; 
		} 
	}while(1);
	return 0; 
} 
