
/*
��һ�����ڻ�����Ϸ�У�ħ��ʦҪÿλ����������һ����λ��abc��a��b��c�ֱ��ǰ�λ��ʮλ�͸�λ���֣���
Ȼ��ħ��ʦ�ù������м���acb��bac��bca��cab��cba������Լ���5�����ĺ�ֵ��ֻҪ����˵��������Ƕ��٣�
��ħ��ʦһ���ܲ³������������ԭ��abc�Ƕ��١����磬���ڼ�˵������ĺ�ֵ��1999����ħ��ʦ����˵�����������443��
��������˵������ĺ�ֵ��1998����ħ��ʦ˵����������ˣ���������ģ���������ħ����Ϸ��
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"Input a sum:"
**�����ʽҪ��"The sum you calculated is wrong!\n"  "The number is %d\n"
��������ʾ�����£�
Input a sum:1999
The number is 443
*/
#include <stdio.h>
int qiuhe(int a,int b,int c);
int Magic(int sum);
int main()
{
	int sum,cai;
	printf("Input a sum:");
	scanf("%d",&sum);
    cai=Magic(sum);
	if(cai==1000)
	{
	    printf("The sum you calculated is wrong!\n");
	}else{
		printf("The number is %d\n",cai);
	}
	return 0;
}
int Magic(int sum)
{
	int i,q,a,b,c;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		c=i%10;
		b=i/10%10;
		//acb��bac��bca��cab��cba//
		q=qiuhe(a,c,b)+qiuhe(b,a,c)+qiuhe(b,c,a)+qiuhe(c,a,b)+qiuhe(c,b,a);
		if(q==sum){
			break;
		}
	}
	return i;
}
int qiuhe(int a,int b,int c)
{
	int m;
	m=a*100+b*10+c;
	return m;
}
    


