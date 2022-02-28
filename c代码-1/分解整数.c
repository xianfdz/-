#include<stdio.h>
#include<string.h>
#define N 50
int Apart(int number,char cuncu[]);
int main()
{
 int number,sumz,i;
 char cuncu[N]; 
 scanf("%d",&number);
 sumz=Apart(number,cuncu);
  printf("sumz=%d\n",sumz);
 printf("%d=",number);
 for (i=sumz-1;i>=0;i--)
 {   
    if (cuncu[i]!=1)
    {
    	
     cuncu[i]=i;
  printf("2( %d )+",cuncu[i]);
    }
    
    }
    
 return 0;
} 
int Apart(int number,char cuncu[])
{
 int x,i,sum=0;
 if (number<1)
 {
  printf("error");
 }
 for (i=0;number>=1&&i<50;i++)
 {
  x=number%2;
  printf("%d\t",x);
  number/=2;
  cuncu[i]=x+1;
  printf("%d\n",cuncu[i]);
 }
 cuncu[i]='\0';
 sum=strlen(cuncu);
 printf("sum=%d\n",sum);
    return sum;
}
