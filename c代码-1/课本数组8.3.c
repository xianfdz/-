#include<stdio.h>
# define N 40
int ReadScore(int score[]);
int main(void)
{
 int score[N];
 printf("%d",ReadScore(score));
 return 0;
} 
int ReadScore(int score[])
{
 int i=-1,m=0;
 do
 {
	i++;
  printf("input score:");
  scanf("%d",&score[i]);
  if(score[i]<60&&score[i]>0)
	{
		m++;
	}
 }while(score[i]>=0);
 return m;
}
