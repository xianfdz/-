/*��д����������������a���һ��8λ����������ÿ������Ԫ��Ϊһ��һλ���������жϸ����Ƿ�Ϊ�Գ����������ɼ������롣���磺132231Ϊ�Գ�����
**�����ʽҪ��"%d"
**�����ʽҪ��"no,it is not\n" "yes,it is\n"
��������ʾ��1���£�
1
2
3
4
4
3
2
1
���
yes,it is
��������2ʾ�����£�
2
3
4
4
3
2
1
0
���
no,it is not
*/
#include <stdio.h>
int main()
{
	int q,w,e,r,t,y,u,i;
	int a[8]={q,w,e,r,t,y,u,i,},b[8];
    scanf("%d\n",&q);
    scanf("%d\n",&w);
    scanf("%d\n",&e);
    scanf("%d\n",&r);
    scanf("%d\n",&t);
    scanf("%d\n",&y);
    scanf("%d\n",&u);
    scanf("%d",&i);
    b[1]=i;
    b[2]=u;
    b[3]=y;
    b[4]=t;
    b[5]=r;
    b[6]=e;
    b[7]=w;
    b[8]=q;
	if(a[8]==b[8])
	{
		printf("yes,it is\n");
	}else{
		printf("no,it is not\n");
	}
	return 0;
}
