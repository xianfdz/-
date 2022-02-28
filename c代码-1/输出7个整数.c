//下面程序的功能是读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。找出其中的错误，并改正之。
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
