/*�ڴ��������ɺ졢�ơ������ס���5����ɫ����ÿ�δӿڴ���ȡ��3����
��������ָ�����飬��̴�ӡ���õ�3�ֲ�ͬ��ɫ��������п���ȡ����
���պ�����׺ڵ�˳������������п��ܵĽ⣬��Ҫ����ظ���ȡ������������ͬ��˳��ͬ��Ϊ��ͬ��ȡ������
char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
������ʾ��Ϣ�����ݸ�ʽ����
�����ʾ��Ϣ�����ݸ�ʽ��"%d:%s,%s,%s\n"
�밴���¿�ܱ�̣�
*/ 
/*#include <stdio.h>
int main()
{
    char *bColor[] = {"RED", "YELLOW", "BLUE", "WHITE", "BLACK"};
	int i,n=0,j,h;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<4;j++)
		{
			for(h=j+1;h<5;h++)
			{
				n++;
				printf("%d:%s,%s,%s\n",n,bColor[i],bColor[j],bColor[h]);
			}
		}
	} 
    return 0;
}*/
#include<stdio.h>
int main()
{
	 int a,b,c,m,sum;
	 int x=0;
	 printf("Input a sum:\n");
	 scanf("%d",&m);
	 for(a=1;a<=9;a++)
	 {
		  for(b=0;b<=9;b++)
		  {
			   for(c=0;c<=9;c++)
			   {
	
				    if(m==(2*b+2*a+c)+10*(a+a+2*c+b)+100*(2*b+2*c+a)) 
				    {
				           x=1;
				          sum=100*a+10*b+c;
				          
				    }  
			   }
		  }
	 }
   if(x==1) printf("The number is %d\n",sum);
	    else	printf("The sum you calculated is wrong!\n");
 	 return 0;
}
