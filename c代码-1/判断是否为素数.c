//�Ķ����³����ҳ����е�5�����󣬲�����֮��

#include <stdio.h>
#include <math.h>
int isprime(int m);        
int main()
{
    int n,flag;
    printf("Input n:");
    scanf("%d", &n);        
    flag=isprime(n);       
    if(flag) 
    {
        printf("Yes!\n");    
	}
    else  {
        printf("No!\n");
    }
}
/* ��������  isprime
�������ܣ��ж�m�Ƿ�Ϊ����
��ڲ�����������m 
����ֵ��  ����ֵΪ1ʱ����ʾm��������
����ֵΪ0ʱ����ʾm�������� */
int isprime(int m)      
{
    int i;
    if(m==1)              
        return 0;  /*1�������������Է���0ֵ*/
    for(i=2; i<=sqrt(m); i++)
    {
    if(m%i==0)  {
    return 0;
    }
    else{
    	return 1;
    }
    }
}
