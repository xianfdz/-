#include<stdio.h> 
int main() 
{ 
 int i, key; 
 char msg, ct; 
 printf("Please input a key between 0~25:\n"); 
 printf("key="); 
 scanf("%d", &key); 
 printf("Enter a message:\n"); 
 scanf("%c", &msg); 
 for(i = 0; ; i++) 
 { 
 scanf("%c", &msg); 
 if(('a' <= msg) && (msg <= 'z')) 
 { 
 ct =(msg - 'a' + key + 26) % 26 + 'a'; 
 printf("%c", ct); 
 } 
 else if(('A' <= msg) && (msg <= 'Z')) 
 { 
 ct =(msg - 'A' + key + 26) % 26 + 'A'; 
 printf("%c", ct); 
 } 
 else if(msg == ' ') 
 { 
 printf("%c", msg); 
 } 
 else 
 { 
 break; 
 } 
 } 
 printf("\n"); 
 
 printf("Enter a ciphertext:\n"); 
 for(i = 0; ; i++) 
 { 
 scanf("%c", &ct); 
 if(('a' <= ct) && (ct <= 'z')) 
 { 
 msg =(ct - 'a' ¨C key + 26) % 26 + 'a'; 
 printf("%c", msg); 
 } 
 else if(('A' <= ct) && (ct <= 'Z')) 
 { 
 msg =(ct - 'A' ¨C key + 26) % 26 + 'A'; 
 printf("%c", msg); 
 } 
 else if(ct == ' ') 
 { 
 printf("%c", ct); 
 } 
 else 
 break; 
 } 
 printf("\n");
}
