#include<stdio.h>
#define N  26
void Open(char p[N],int z,int n);
void Close(char p[N],int z,int n);
int main(void)
{
 int m,z,n;
 char str[N];
 printf(" ‰»Î1º”√‹\t");
 scanf("%d\n",&m);
 scanf("%d\n",&z);
 scanf("%d\n",&n);
 if (m==1) Close(str,z,n);
 else      Open(str,z,n);
 return 0;
}
void Close(char p[N],int z,int n)
{   int i,j;
 for (i=0;i<n;i++)
 {
  scanf("%c",&p[i]); 
 }
 for (j=0;j<n;j++)
 {
  if ((p[j]+z)<=122) printf("%c",p[j]+z);
  else 
  {
   printf("error!");
   break;
  }
 } 
}
void Open(char p[N],int z,int n)
{
 int i,j;
 for (i=0;i<n;i++)
 {
  scanf("%c",&p[i]);
  
 }
 for (j=0;j<n;j++)
 {
   if ((p[j]+z)>=97) printf("%c",p[j]+z);
  else 
  {
   printf("error!");
   break;
  }  
 }  
}
