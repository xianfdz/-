/*����Ҫ��ʵ��һ���������������Ϊn��ϵ��Ϊa[0]?...?a[n]�Ķ���ʽ��x���ֵ��
�����ӿڶ��壺
double f( int n, double a[], double x );
/*����n�Ƕ���ʽ�Ľ�����a[]�д洢ϵ����x�Ǹ����㡣�����뷵�ض���ʽf(x)��ֵ��
���в�������*/
#include <stdio.h>
 
#define MAXN 10
 
double f( int n, double a[], double x );
 
int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}
 double f( int n, double a[], double x )
 {
	int i;
	double sum=0,p=x;
	for(i=0;i<=n;i++)
	{
		if(i==0){
			sum+=a[i]*1;
		}else if(i==1){
			sum+=a[i]*x;
		}else{
			x*=p;
			sum+=a[i]*x;
		}
	}
	return sum;
 }
/* ��Ĵ��뽫��Ƕ������ */

/*����������
2 	1.1
1 2.5  -38.7
���������
-43.1

#include <stdio.h>
int main()
{
	printf("%d\n",'B');
	printf("%d",'\66');
}*/
