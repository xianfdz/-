/*��һ������ptr��ʾʢ�����ݵ��׵�ַ
 �ڶ�������size��ʾÿ��Ԫ�صĴ�С,��λ�����ֽ�
  ����������nmem��ʾҪ��ȡ��Ԫ�ظ���
   ���ĸ�����stream��ʾ�����ļ�ָ��*/
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
    /* ���ȴ��ļ�����д�����ԣ������ļ����Ѿ�������Ϊwww.dotcpp.com */
    fp = fopen("fp1.txt", "a+");
    /* ��ȡ����ʾ���� */
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

