/*下表是国家和它们的首都： 
Australia Canberra
Belgium Brussels
China Beijing
Denmark Copenhagen
England London
France Paris
Greece Athens
Ireland Dublin
Scotland Edinburgh
Wales Cardiff
写一个程序输入一个国家的国家名，输出该国的首都名。

**提示信息："请输入国家名："
**输出格式要求："%s的首都为%s！"  "你输入的国家%s没有找到它的首都！"
*/
#include<stdio.h>
#include<string.h>
#define N 10
#define M 15
void Search(char counity[][M],char *pstr[N],char input[]);//最好将自定义函数写到宏常量后面 
int main()
{
 char counity[N][M]={"Australia","Belgium""China","Denmark","England","France","Greece","Ireland","Scotland","Wales"};
 char capital[N][M]={"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"}; 
 char *pstr[N],input[M];
 int i;
 for (i=0;i<N;i++){
  pstr[i]=capital[i];
 }
 printf("请输入国家名：");
// getchar();
 gets(input);
 Search(counity,pstr,input);
 return 0; 
}
void Search(char counity[][M],char *pstr[N],char input[])
{
 int i,cnt=0;
 for (i=0;i<N;i++){
  if (strcmp(input,pstr[i])==0){  //此处无需用星号 
  cnt=1;
     }else {
     	cnt=0;
     }
 }
 if(cnt)
 printf("%s的首都为%s！",input,pstr[i]);
 else printf("你输入的国家%s没有找到它的首都！",pstr[i]);
} 
