#include<stdio.h>
int lcm(int a,int b);
int main()
{
 int a,b;
 printf("input a,b:");
 scanf("%d %d",&a,&b);
 printf("%d",lcm(a,b));
 return 0;
}
int lcm(int a,int b)
{
	int i;
 if (a > b)
 {
  for (i = b; i % a != 0 ||i % b != 0; )
  {
   i++;
  }
  return i;
 }
 else
 {
  for (i = a; i % a != 0 || i % b != 0; i++){}
  return i;
 }
}
