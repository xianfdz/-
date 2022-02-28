#include<stdio.h>
#include<string.h>
#define alp 100
void copy(char * m,char * n);
int main()
{
 char x[alp],y[alp];
 char * s1=x;
 char * s2=y;
 gets(x);
 gets(y);
 copy(s1,s2);
 puts(s2);
 
 return 0;
}
void copy(char * m,char * n)
{
 if(strlen(m)>=strlen(n))
 {
  while(*m!=0)
  {
   *n=*m;
   *n++;
   *m++;
  }
  *n=0; 
 }
 else
 {
  while(*n!=0) 
  {
  	if(*m!=0) *n=*m; 
	  else  *n=0;
	*n++;
  	*m++;
  } 
 }
}
