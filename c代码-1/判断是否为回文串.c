/*���Ĵ�:�Ӻ���ǰ�ʹ�ǰ�����ʱ�����һ�����ַ�������abba��12c21��
���д�Ӻ�������ָ����Ϊ�βΣ�ʵ���ж�һ���ַ����Ƿ��ǻ��Ĵ��Ĺ��ܣ���������������á�*/
#include <stdio.h>
#include <string.h>
#define N 100
void panduan(char*p);
int main()
{
	printf("�������ַ���:");
	char a[N]={0};
	gets(a);
	panduan(a);
	return 0; 
} 
void panduan(char*p)
{
	int i,j,cnt;
	for(i=0,j=strlen(p)-1;i<j;i++,j--){
		if(p[i]!=p[j]){
			cnt=0;
			break;
		} else cnt=1;
	}
	if(cnt) printf("���ַ����ǻ��Ĵ�");
	else printf("���ַ������ǻ��Ĵ�"); 
}
