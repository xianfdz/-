#include<stdio.h>
int Gcd(int a, int b)
{
 if(a<=0||b<=0) return 0;
 int t,m;
 while(a!=b)
 {
  if(a>b) a=a-b;
  else    b=b-a;	
 }
 return a;
}

int main()
{
 int a,b,t;
 printf("Input a,b:");
 scanf("%d %d",&a,&b);
 t=Gcd(a,b);
 if(t)
 printf("Gcd=%d\n",Gcd(a,b));
 else
 printf("Input error!\n");
 return 0;
}
