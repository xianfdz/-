#include <stdio.h> 
int SteinGCD(int a, int b) ; 
int main()
{
	int a,b,m;
	scanf("%d %d",&a,&b);
	m=SteinGCD(a,b);
	printf("%d",m); 
}
int SteinGCD(int a, int b) 
{
    int acc = 0;
    while ((a & 1) == 0 && (b & 1) == 0) 
    {
        acc++;
        a >>= 1;
        b >>= 1;
    }
    while ((a & 1) == 0) a >>= 1;
    while ((b & 1) == 0) b >>= 1;
    if (a < b) { int t = a; a = b; b = t; }
    while ((a = (a - b) >> 1) != 0) {
        while ((a & 1) == 0) a >>= 1;
        if (a < b) { int t = a; a = b; b = t; }
    }
    return b << acc;
}
