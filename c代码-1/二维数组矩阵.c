#include<stdio.h>
# define  m 4
# define  n 3
# define  q 5


void   Mult(int a[m][n],int b[n][q],int c[m][q])
{
 int i,j,k;
 

 for (i=0;i<m;i++)
 {
  for (j=0;j<q;j++)
  {
   for (k=0;k<n;k++)
   {
    c[i][j]=c[i][j]+(a[i][k])*(b[k][j]);
   }
   
  }
 }
} 
void result(int c[m][q])
{
 int i,j;
 for (i=0;i<m;i++)
 {
  for (j=0;j<q;j++)
  {
   printf("%d ",c[i][j]);
  }
  printf("\n"); 
 }
} 
int main(void)
{
 int i,j;
 int a[m][n]={1,2,3,4,5,6,7,8,9,10,11,12,},b[n][q]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},c[m][q];
 /*printf("input 4*3 a :\n");
 for (i=0;i<m;i++)
 {
  for (j=0;j<n;j++)
  {
   scanf("%d ",&a[i][j]);
  }
 }
 printf("input 3*5 b:\n");
  for (i=0;i<n;i++)
 {
  for (j=0;j<q;j++)
  {
   scanf("%d ",&b[i][j]);
  }
    }*/
  for (i=0;i<n;i++)
 {
  for (j=0;j<q;j++)
  {
   c[i][j]=0;
  }
 }
 Mult(a,b,c);
 printf("\n");
 result(c); 
 return 0;
} 
