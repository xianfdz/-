/*����һ������n������k���������n�Ĵ�������ĵ�k��ʮ��������λֵ�����磬����n=1234, k=2����������3��
**�����ʽҪ��"%d%d" ��ʾ��Ϣ��"input integer n and k:\n"
**�����ʽҪ��"%d"
��������ʾ�����£�
input integer n and k:
1234 2
3
*/
#include <stdio.h>
int main()
{
	int i,n,k;
	printf("input integer n and k:\n");
	scanf("%d %d",&n,&k);
	for(i=1;i<k;i++)
	{
		n/=10;
	}
	printf("%d",n%=10);
}
