
/*
����һ����������Ҫ�����෴��˳������������õݹ鷽��ʵ�֡�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter number:"
**�����ʽҪ��"%d"
��������ʾ�����£�
Enter number:35567899
99876553
*/
#include <stdio.h>
int fan (int x); 
int main()
{
	int number,t;
	printf("Enter number:");
	scanf("%d",&number);
	t=fan(number);
	printf("%d",t);
}
int fan (int x)
{
	int c;
	while(x>9)
	{
		c=x%10;
		printf("%d",c);
		x=x/10;
	}
}

