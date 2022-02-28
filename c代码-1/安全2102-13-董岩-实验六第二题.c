//2. 自己编写字符串的复制函数，要求：用指针来处理实现把字符串s1复制到字符串上s2。
#include <stdio.h>
#include <string.h>
#define N 100
void fuzhi(char*p,char*q);
int main()
{
	int i;
	char s1[N]={0},s2[N]={0};//数组初始化为0; 
	char*p=s1,*q=s2;
	printf("请输入两个字符串（字符串大小不超过100）：\n");
	printf("s1=");
	gets(p);
	printf("s2=");
	gets(q);
	fuzhi(p,q);
	printf("把字符串s1复制到字符串上s2后\ns1=%s\ns2=%s",s1,s2);
	return 0;
}
void fuzhi(char*p1,char*p2)
{
	if(strlen(p1)>=strlen(p2)){
		do
		{
			*p2=*p1;
		}while(*p1++!=0&&*p2++!=0);
	} else {
		do
		{
			if(*p1!=0) *p2=*p1;
			else *p2=0;
			*p1++;
		}while(*p2++!=0);
	}
}
/* strlen(p1)>=strlen(p2)时： 
    		  p1->"a b c d   e   f '\0'"

			  p2->"h i j k '\0'        "
			  
	第1次循环 p2->"a i j k '\0'        "
	    			
	第2次循环 p2->"a b j k '\0'        "
	
	第3次循环 p2->"a b c k '\0'        "
	
	第4次循环 p2->"a b c d '\0'        "
	
	第5次循环 p2->"a b c d   e         "
	
	第6次循环 p2->"a b c d   e   f     "
	
	第7次循环 p2->"a b c d   e   f '\0'"
	
*/

