/*�������µ����飺
  float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 } ;
  float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 } ;
  int mpl[5] ;  /* Miles per litre. */
/*дһ��������㲢��ʾmpl��ÿ��Ԫ�ص�ֵ��ʹ��ָ��������±��������Ԫ�ء�

�����ʽҪ��"%d\t"
*/
#include <stdio.h>
int main()
{
	float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4,-1, } ;
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6,} ;
    int mpl[5];
    float *q=&litres[0];
    float *p=&miles[0];
    while(*q!=-1)
    {
    	int m;
		m=(*p++)/(*q++);
    	printf("%d\t",m);
    }
}
/*#include <stdio.h>
int main()
{
	char ac[8]={0,4,6,4,6,57,7,-1};
    char *p=&ac[0];
	while(*p!=-1)
	{
		printf("%d\n",*p++);
	}
}*/
