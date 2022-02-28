#include<stdio.h>
#define N 10
void ReadNumber(int number[]);
void DataNumber(int number[]);
void PrintNumber(int number[]);
int main(void)
{
 int number[N];
 ReadNumber(number);
 DataNumber(number);
 printf("sorted number:\n");
 PrintNumber(number);
 
 return 0;
} 
//输入十个数
void ReadNumber(int number[])
{
 int i=-1;
 do
 {
  i++;
  printf("input number:");
  scanf("%d",&number[i]);
 } while (i<10);
 
} 
//按排序法将十个数字由大到小排列
void DataNumber(int number[])
{
 int i,j,temp;
 for (i=0;i<9;i++)
 {
  for (j=i;j<10;j++)
  {
   if(number[j]>number[i])
   {
    temp=number[j];
    number[j]=number[i];
    number[i]=temp;
   }
    
  
  }
 }
} 
void   PrintNumber(int number[])
{
 int i;
 for (i=0;i<10;i++)
 {
  printf("%d ",number[i]);
 }
 
 
}
