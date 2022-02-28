#include<stdio.h>
#define N  26
void Open(char p[N],int z);
void Close(char p[N],int z);
int main(void)
{
 int m,z;
 char str[N];
 printf("����1����\t");
 scanf("%d\n",&m);
 scanf("%d\n",&z);
 if (m==1) Close(str,z);
 else      Open(str,z);
 return 0;
}
void Close(char p[N],int z)
{   int i,j;
 for (i=0;i<N;i++)
 {
  scanf("%c",&p[i]);
  if (p[i]==' ') break; 
 }
 for (j=0;j<i;j++)
 {
  if ((p[j]+z)<=122) printf("%c",p[j]+z);
  else 
  {
   printf("error!");
   break;
  }
 } 
}
void Open(char p[N],int z)
{
 int i,j;
 for (i=0;i<N;i++)
 {
  scanf("%c",&p[i]);
  if (p[i]==' ') break; 
 }
 for (j=0;j<i;j++)
 {
   if ((p[j]+z)>=97) printf("%c",p[j]+z);
  else 
  {
   printf("error!");
   break;
  }  
 }  
}
