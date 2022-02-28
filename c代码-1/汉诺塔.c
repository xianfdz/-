/* 
��ŵ����Tower of Hanoi��,�ֳƺ���������һ��Դ��ӡ�ȹ��ϴ�˵��������ߡ�
�����촴�������ʱ�������������ʯ���ӣ���һ�������ϴ������ϰ��մ�С˳������64Ƭ�ƽ�Բ�̡�
���������������Ű�Բ�̴����濪ʼ���մ�С˳�����°ڷ�����һ�������ϡ����ҹ涨����СԲ���ϲ��ܷŴ�Բ�̣�
����������֮��һ��ֻ���ƶ�һ��Բ�̡�
��n=1ʱ���ƶ�1 ���� A��>C; �ƶ�һ��
��n=2ʱ���ƶ�1 ���� A��>B;
�ƶ�2 ���� A��>C;
�ƶ�1 ���� B��>C; �ƶ�����
��n=3ʱ���ƶ�1 ���� A��>C;
�ƶ�2 ���� A��>B;
�ƶ�1 ���� C��>B;
�ƶ�3 ���� A��>C;
�ƶ�1 ���� B��>A;
�ƶ�2 ���� B��>C;
�ƶ�1 ���� A��>C; �ƶ��ߴ�*/ 
#include <stdio.h>
int hanoi(int n, char a, char b, char c);
int cnt;
int main() 
{
	int n;
	while( scanf ("%d", &n)) {
		cnt=0;
		cnt=hanoi(n, 'A', 'B', 'C');
		printf("�ƶ���%d��\n",cnt);
	}
	return 0;
}
int hanoi(int n, char a, char b, char c)
{
	if(n==1){
		printf("%c->%c\n",a,c);
		cnt++;
	}else{
		hanoi(n-1,a,c,b);
		printf("%c->%c\n",a,c);
		cnt++;
		hanoi(n-1,b,a,c);
	}
	return cnt;
	
}
