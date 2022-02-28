//假设某袋子中装有3个红球，5个白球，6个黑球，现从该袋子中任意取出8个球，下面程序的功能是输出这8个球中至少有一个白球的所有方案。找出其中错误并改正之。
#include <stdio.h>
main()
{
    int i,j,k;
   for(i=0;i<=3;i++)
    {
        for(j=1;j<=5;j++)
        {   
       		k=8-i-j;
        	if(k>=0&&k<=6)
			{
        	printf("hong=%d\t,bai=%d\t,hei=%d\t\n",i,j,k);
        	}
        	
        }
    }
}
//for(j=1;j<=5;j++)
//、、for(i=0;i<=3;i++)
