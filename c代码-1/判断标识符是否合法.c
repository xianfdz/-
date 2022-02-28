/*以下划线、英文字符开头的并且由下划线、英文字符和数字组成的标识符都是合法的标识符。编写一个程序，判断输入的一行字符是否构成一个合法的C标识符（以下划线_开头的标识符视为合法的C标识符）。（假设输入的字符串非关键字且最大长度为32）
**输入格式要求：getchar()
**输出格式要求："is\n" "is not\n"
程序运行示例1如下：
$223
is not
程序运行示例2如下：
hello world
is not
程序运行示例3如下：
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

