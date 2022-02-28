//写一个程序读入你的姓名，然后每个字母间加一个空格后输出。例如，姓名John显示为J o h n。

//**输入格式要求："%s"  提示信息："请输入你的姓名："
#include <stdio.h>
int main()
{
	printf("请输入你的姓名：");
    char name[50];
    scanf("%s",name);
    char ch;
    int i = 0,j=0;

    //接受姓名存储到name数组中
    while ((ch = getchar()) != '\n') {
        name[i] = ch;
        i++;
    }
    //反向操作
    j = i;
    
    //除去末尾的空格（如果有）
    while (name[j] == ' ') {
        j--;
    }
   
    //此时末尾空格已经除去
    //将数组下标定位到姓的第一个字母
    while(name[j] != ' ') {
        j--;
    }
    
    //输出姓的第一个字母
    printf("%c,", name[j + 1]);
   
    //除去名和姓之间的空格：
    while (name[j] == ' ') {
        j--;
    }

   //将数组下标定位到名的第一个字母
    //防止数组下标越界，j>0
    while (name[j] != ' '&&j>0) {
        j--;
    }

   //输出姓
    while (name[j] != ' '&&j<i) {
        printf("%c", name[j]);
        j++;
    }
    printf(".");

}


