   #include <stdio.h>
   
   //void display(char *ptr[100], int len)  // ����������ָ����Ϊ�βε�д�� 
   //void display(char *ptr[], int len)     // �ڶ�������ָ����Ϊ�βε�д��
void display(char **ptr, int len)        // ��һ������ָ����Ϊ�βε�д��
   {
   	int i; 
           for( i = 0; i < len; i++)
           {
                   printf("%s\n", ptr[i]);           // ��һ�������ʽ
                  printf("%s\n", *(ptr + i));       // �ڶ��������ʽ
                 printf("%s\n", *(&ptr[0] + i));   // �����������ʽ
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
