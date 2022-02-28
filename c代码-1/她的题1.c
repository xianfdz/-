#include<stdio.h>
void Divarray(int *parray);
int main(void)
{
 int i;
 int parray[10];
 for (i=0;i<10;i++)
 {
  scanf("%d",&parray[i]);
 }
 Divarray(parray);
 for (i=0;i<10;i++)
 {
  printf("%d ",parray[i]);
 }
 return 0;
 
}
void Divarray(int *parray)
{
 int i;
 if (parray[0]==0)
 {
  printf("error");
 }
 else
 {
  for (i=9;i>=0;i--)
  {
   parray[i]/=parray[0];
  }
 }
 
}
