/*�±��ǹ��Һ����ǵ��׶��� 
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
дһ����������һ�����ҵĹ�����������ù����׶�����

**��ʾ��Ϣ��"�������������"
**�����ʽҪ��"%s���׶�Ϊ%s��"  "������Ĺ���%sû���ҵ������׶���"
*/
#include<stdio.h>
#include<string.h>
#define N 10
#define M 15
void Search(char counity[][M],char *pstr[N],char input[]);//��ý��Զ��庯��д���곣������ 
int main()
{
 char counity[N][M]={"Australia","Belgium""China","Denmark","England","France","Greece","Ireland","Scotland","Wales"};
 char capital[N][M]={"Canberra","Brussels","Beijing","Copenhagen","London","Paris","Athens","Dublin","Edinburgh","Cardiff"}; 
 char *pstr[N],input[M];
 int i;
 for (i=0;i<N;i++){
  pstr[i]=capital[i];
 }
 printf("�������������");
// getchar();
 gets(input);
 Search(counity,pstr,input);
 return 0; 
}
void Search(char counity[][M],char *pstr[N],char input[])
{
 int i,cnt=0;
 for (i=0;i<N;i++){
  if (strcmp(input,pstr[i])==0){  //�˴��������Ǻ� 
  cnt=1;
     }else {
     	cnt=0;
     }
 }
 if(cnt)
 printf("%s���׶�Ϊ%s��",input,pstr[i]);
 else printf("������Ĺ���%sû���ҵ������׶���",pstr[i]);
} 
