//�������Ĺ����Ƕ�ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�����ģ����ҳ����еĴ��󣬲�����֮��
#include <stdio.h>
int main()
{   
    int i=1,a,n=1;
    while(n<=7)
    {   
        do
        {   
         scanf("%d",&a);          
        }while(a<1 && a>50);      
        for(i=1;i<=a;i++){
            printf("*");
    	}
    	printf("\n");
    n++;
    }
}
