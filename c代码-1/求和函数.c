#include <stdio.h>
void sum(int begin,int end);//���� 
int main()
{
	sum(3,4);
	sum(34,45);
	sum(2,10);//ֵ 
	return 0;
}
void sum(int begin,int end)//���� begin��endΪ���� 
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d��%d�ĺ�Ϊ%d\n",begin,end,sum);
}
