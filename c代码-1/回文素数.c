/*��������
��ν����������ָ��һ������n�������Һʹ��ҵ��������ͬ�ģ�
���������ͳ�Ϊ��������������11��101��313�ȡ�
��̼��㲢���������n��100<=n<=1000���Ļ���������
��ͳ����Щ���������ĸ���������n��ֵ�Ӽ������롣

��������ʾ��1
Input n:
100�L
  11
count=1

��������ʾ��2
Input n:
1000�L
  11 101 131 151 181 191 313 353 373 383 727 757 787 797 919 929
count=16

�����ʽ:"%d"
�����ʽ��
������ʾ��Ϣ��"Input n:\n"
�����ʽ��"%4d"
          "\ncount=%d\n*/
#include<stdio.h>
int main()
{
	int n,count=0,i,su=1,j,hui=0,x,y;
	printf("Input n:\n");
	scanf("%d",&n);
	for(i=11;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				su=0;
				break;
			}else su=1;
		}
		if(i<100){
			x=i/10;
			y=i%10;
			if(x==y) hui=1;
			else hui=0;
		}else {
			x=i/100;
			y=i%10;
			if(x==y) hui=1;
			else hui=0;
		}
		if(su==1&&hui==1) {
			printf("%4d",i);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}
