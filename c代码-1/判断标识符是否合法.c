/*���»��ߡ�Ӣ���ַ���ͷ�Ĳ������»��ߡ�Ӣ���ַ���������ɵı�ʶ�����ǺϷ��ı�ʶ������дһ�������ж������һ���ַ��Ƿ񹹳�һ���Ϸ���C��ʶ�������»���_��ͷ�ı�ʶ����Ϊ�Ϸ���C��ʶ������������������ַ����ǹؼ�������󳤶�Ϊ32��
**�����ʽҪ��getchar()
**�����ʽҪ��"is\n" "is not\n"
��������ʾ��1���£�
$223
is not
��������ʾ��2���£�
hello world
is not
��������ʾ��3���£�
hello
is
*/
#include <stdio.h>
int main()
{	   	   	    
    char c;
    int first = 1, flag1 = 0, flag2 = 1, n = 0;
    while ((c = getchar()) != '\n')
    {	   	   	    
        n++;
        if (first == 1)
        {	   	   	    
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '_'))
                flag1 = 1;
            first = 0;
        }
        else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c == '_')))
            flag2 = 0;
    }
    if (flag1 == 1 && flag2 == 1 && n <= 31)
        printf("is\n");
    else
        printf("is not\n");
    return 0;
}	   	   	    

