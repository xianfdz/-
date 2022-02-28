#include <stdio.h>
#include <string.h>
int main()
{
char fu[5][100];
//ar *p[5],*p2;
char p2[5][100];
int i,k;
for(i=0;i<5;i++)
{
   scanf("%s",&fu[i]);
   //p[i]=fu[i];
}
for(i=0;i<4;i++)
{
  for(k=i+1;k<5;k++)
  {
    if(strcmp(fu[i],fu[k])==1)
     {
       p2[0] = fu[i];
       
    }
  }
}
 for(i=0;i<5;i++)
 {
 	printf("%s\n",fu[i]);
 }
return 0;
}
