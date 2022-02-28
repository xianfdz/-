#include<stdio.h>
int ping[12]={31,28,31,30,31,30,31,31,39,31,30,31};
int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
char  week[7][10]={"星期一","星期二","星期三","星期四","星期五","星期六","星期日"};

int main(void)
{
 int i,t1,t2,a;
 int sum;
 int year,month;
 a=0;
 sum=0;
 scanf("%d %d",&year,&month);
 printf("***********************************");
 printf("\n");
 for (i=0;i<7;++i)
 {
  printf("%s\t",week[i]);
 }
 printf("\n");
 if ((year%4==0&&year%100!=0)||(year%400==0))
 {
  a=1;
 }
 else
 {
     a=0;
 }
 for (i=1900;i<year;i++)
 {
  if (a==1)
  {
   sum+=run[i];
  }
  else
  {
   sum+=ping[i];
  }
 }
 for (i=1;i<month;i++)
 {
  if (a==1)
  {
   sum+=run[i];
  }
  else 
  {
   sum+=ping[i];
  }
 }
 
 t1=sum%7;
 t2=7-t1;
 for (i=0;i<t1;i++)
 {
  printf("\t");
 }
 if (a==1)
 { for (i=1;i<=run[month-1];i++)
  {
   printf("%d\t",i);
   if ((i==t2)||(i-t2)%7==0)
   {
    printf("\n");
   }
   
  }
  printf("\n");
 
 }
 else 
 { for (i=1;i<=ping[month-1];i++)
  {
   printf("%d\t",i);
   if ((i==t2)||(i-t2)%7==0)
   {
    printf("\n");
   }
  }
  printf("\n");
 }
 printf("*******************************************");
 return 0;
 
}
