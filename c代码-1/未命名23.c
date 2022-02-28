#include<stdio.h>
int main()
{
 int a = 3, b = 4, c = 5;
 int x, y,i;
 int array[5] ;
 	
 array[0] = a + b > c && b == c;
 array[1] = a || b && b == c;
 array[2] = !(a > b) && !c || 1;
 array[3] = !(x = a) && (y = b) && 0;
 array[4] = !(a + b) + c - 1 && b + c / 2;
 for (i = 0; i < 5; i++)
 {
  printf("%d", array[i]);
 }
 return 0;
}

