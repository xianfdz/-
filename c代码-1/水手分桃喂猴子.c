/*五个水手在岛上发现一堆椰子，先由第1个水手把椰子分为等量的5堆，还剩下1个给了猴子，自己藏起1堆。
然后，第2个水手把剩下的4堆混合后重新分为等量的5堆，还剩下1个给了猴子，自己藏起1堆。
以后第3、4个水手依次按此方法处理。
最后，第5个水手把剩下的椰子分为等量的5堆后，同样剩下1个给了猴子。
请用迭代法编程计算并输出原来这堆椰子至少有多少个。
**输出格式要求："y = %d\n"*/
#include <stdio.h>
int Coconut(int n);
int main()
{        
    printf("y = %d\n", Coconut(5));
    return 0;
}        
int Coconut(int n)
{        
    int   i = 1,t;
    float x = 1, y;
    y = n * x + 1;
    do
    {        
        y = y * n / (n - 1) + 1;
        i++;
        if (y != (int)y)
        {        
            x = x + 1;
            y = n * x + 1;
            i = 1;
        }
    }while (i < n);
    t=(int)y;
    return t;
}
