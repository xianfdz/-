#include<stdio.h>
# define N 40
int ReadScore(int score[],int m);
int main(void)
{
 int score[N],m;
  
 ReadScore(score,m);
 printf("%d",m);
 return 0;
} 
int ReadScore(int score[],int m)
{
 int i=-1;
 do
 {
  i++;
  printf("input score:");
  scanf("%d",&score[i]);
  for  (m=0;score[i]<60&&score[i]>0;)
  {
   m++;
   break; 
  }
  
 }while (score[i]>=0);
 return m;
}
