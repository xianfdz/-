/*��������Ӣ�ĵ����ڼ���ͨ���������ڱ�������Ӧ�����֣�
���鵽��β����δ�ҵ��������������ʾ��Ϣ��
��������д��ڱȽ����εĴ�����ͨ�������͵��Գ��򣬷��ֲ����������еĴ���
ע�⣺�뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
����û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
���ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�
�Ĵ�ʱ���ܸı����ԭ�е���ͼ�����ܸı亯��ԭ��
*/ 
#include  <stdio.h>
#include <string.h>
#define   WEEKDAYS  7
#define   MAX_STR_LEN  10
main()
{
    int i, pos;
    int findFlag=0;
    char x[MAX_STR_LEN];
    char weekDay[][MAX_STR_LEN] = { "Monday", "Tuesday",
                                   "Wednesday", "Thursday", "Friday", "Saturday","Sunday"
                                  };
    printf("Please enter a string:\n");
    scanf("%s", &x);
    for (i = 0; i < WEEKDAYS || findFlag==1; i++)
    {
       
	    if (strcmp(x,weekDay[i])==0)
	    {
	        printf("%s is %d\n", x, i+1);
	        break;
	    }
	    else
	    {
	    	if(i==6)
	        printf("Not found!\n");
	    }
	}    
}
