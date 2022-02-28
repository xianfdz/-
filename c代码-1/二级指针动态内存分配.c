/*#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
 int number,i,j;    //对于字符串数组，我们如何实现动态内存分配？ 
 scanf("%d",&number);
 char *p[number];
 for (i=0;i<number;i++)
 {
  p[i]=(char *)calloc(N,sizeof(char));
 }
 if (p==NULL)
 {
  printf("error");
  exit(0);
 }
 for (i=0;i<number;i++)
 {
  scanf("%s",p[i]);
 }
 for (i=0;i<number;i++)
 {
  printf("%s\n",p[i]);
 }
 for (i=0;i<number;i++)
 {
  free(p[i]);
 }
 free(p);
 return 0;
} */
#include<stdio.h>
#include<stdlib.h>
#define N 4
int main()
{
 int number,i,j;
 scanf("%d",&number);
 getchar();
 char **p=NULL;
 p=(char **)malloc(number*sizeof(char *));
 for (i=0;i<number;i++)
 {
  p[i]=(char *)malloc(N*sizeof(char));
 }
 if (p==NULL){
  printf("error");
  exit(0);
 }
 for (i=0;i<number;i++)
 {
  for (j=0;j<N;j++)
  {
   scanf("%c",&p[i][j]);
  }
 }
 
 for (i=0;i<number;i++)
 {
  for (j=0;j<N;j++)
  {
   printf("%c",p[i][j]);
  }
 }
 for (i=0;i<number;i++)
 {
     free(p[i]);
    }
 free(p);
 return 0;
} 
