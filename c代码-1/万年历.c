#include<stdio.h>
int year,month;
int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char week[7][10]={"星期一","星期二","星期三","星期四","星期五","星期六","星期日"};

int Isleap(int year)
{
 if (year%400==0||year%4==0&&year%100!=0)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void  Printstar()
{ 
    int i;
 
 printf("*************************************\n");
 for ( i=0;i<7;i++)
 {
  printf("%s\t",week[i]);
 }
 printf("\n");
}
int Daysum(int year,int month)
{
 int i;
 int m;
 int sum=0;
 for ( i=1900;i<year;i++)
 {
 
 m=Isleap(i);
  if (m==1)
  {
   sum=sum+366;
  }
  else
  {
   sum=sum+365;
  }
  
 }
 for (i=0;i<month-1;i++)
 {
  if (Isleap(year)==1)
  {
   sum=sum+run[i];
  }
  else
  {
   sum=sum+ping[i];
  }
 }
 return sum;
}
void Printcal(int sum,int year,int month)
{
 int i,m;
 
 
 m=Isleap(i);
 Daysum(year,month);
 int nRes,nTmp;
 nRes=sum%7;
 nTmp=7-nRes;
 for (i=0;i<nRes;i++)
 {
  printf("");
 } 
 if (m==1)
 {
  for ( i=1;i<=run[month-1];i++)
  {
  printf("%d\t",i);
  if (nTmp==i||(i-nTmp)%7==0)
  {
   printf("\n");
   
  }
 
     }
     printf("\n");
    }
 else 
 {
  for ( i=1;i<=ping[month-1];i++)
  {
  
  printf("%d\t",i);
  if (nTmp==i||(i-nTmp)%7==0)
  {
   printf("\n");
   
  }
 
       }
       printf("\n");
 }
  
 
}
int main(void)
{   int sum=0; 
 while(1)
 {
  scanf("%d %d",&year,&month);
  
  Printstar();
  
  Daysum(year,month);
  Printcal(sum,year,month);
     printf("*********************************");
  break;
 }
 return 0;
}

