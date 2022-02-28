//以下程序有若干语法错误，不能正确输出成员a和成员v的值。请找出错误并改正之。
#include <stdio.h> 
union uu 
{   int a;
    struct  er
    {   int u;
        float v;
    }b;
};
main()
{   union uu m; 
    m.a=200;
    printf("%d\t",m.a);
    m.b.u=500;    
    m.b.v=120.5;      
    printf("%f\n",m.b.v);
}
