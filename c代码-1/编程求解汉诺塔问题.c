/*�����⺺ŵ�����⡣
��ŵ����Hanoi���Ǳ����õݹ鷽�����ܽ���ľ������⡣��������ӡ���񻰡�
�ϵ۴�������ʱ�����������ʯ���ӣ��ڵ�һ�������ϴ������ϰ���С˳������64Ƭ�ƽ�Բ�̣�
��ͼ7-3��ʾ���ϵ����������Ű�Բ�̴����濪ʼ����С˳�����°ڷŵ��ڶ��������ϣ����ҹ涨��
ÿ��ֻ���ƶ�һ��Բ�̣���СԲ���ϲ��ܷŴ�Բ�̡�����Ԥ��˵����������ʱ�������һ˲������ʽ����Ҳ����������������������һ�̲�ͣ�ذᶯ��Բ�̡�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input the number of disks:"
**�����ʽҪ��"Steps of moving %d disks from A to B by means of C:\n" "Move %d: from %c to %c\n"
��������ʾ�����£�
Input the number of disks:3
Steps of moving 3 disks from A to B by means of C:
Move 1: from A to B
Move 2: from A to C
Move 1: from B to C
Move 3: from A to B
Move 1: from C to A
Move 2: from C to B
Move 1: from A to B
*/
#include <stdio.h>
int n;
void hannuo(int n,char a,char b,char c)
{   
    if (n == 1) {
        printf("Move %d: from %c to %c\n",n,a,c);
    }
    else
    {
        hannuo(n-1,a,c,b);
	    printf("Move %d: from %c to %c\n",n,a,c);
        hannuo(n-1,b,a,c);
    }
}
int main ( )
{
	printf("Input the number of disks:");
	scanf("%d",&n);
	printf("Steps of moving %d disks from A to B by means of C:\n" ,n);
    hannuo(n,'A','C','B');
    
}

