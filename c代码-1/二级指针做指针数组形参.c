   #include <stdio.h>
   
   //void display(char *ptr[100], int len)  // 第三种数组指针作为形参的写法 
   //void display(char *ptr[], int len)     // 第二种数组指针作为形参的写法
void display(char **ptr, int len)        // 第一种数组指针作为形参的写法
   {
   	int i; 
           for( i = 0; i < len; i++)
           {
                   printf("%s\n", ptr[i]);           // 第一种输出方式
                  printf("%s\n", *(ptr + i));       // 第二种输出方式
                 printf("%s\n", *(&ptr[0] + i));   // 第三种输出方式
         }
 }
  
  int main(void)
  {
          char *arr[] = {"Hello", "koko", "Nice!"};
          int len = sizeof(arr) / sizeof(arr[0]);
          printf("arr[0] = %p\n", arr[0]);
         printf("&arr[0] = %p\n", &arr[0]);
        //printf("len of arr is %d\n", len);
         display(arr, len);
         return 0;
 }
