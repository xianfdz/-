/*��дһ�������������һ��������������ķ��š�
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter n:"
**�����ʽҪ��"+\n" "-\n" "this number has no sign\n"
��������ʾ��1���£�
Enter n:90
+
��������ʾ��2���£�
Enter n:0
this number has no sign
*/
#include <stdio.h>
int main()
{
	int x;
	printf("Enter n:");
	scanf("%d",&x);
	if(x>0)
	{printf("+");}
	else if(x<0)
	{printf("-");}
	else{printf("this number has no sign\n");}
	return 0;
}
