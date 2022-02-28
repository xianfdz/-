/*编程统计候选人的得票数。
设有3个候选人zhang、li、wang（候选人姓名不区分大小写），
10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，
则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。
要求用结构体数组candidate表示3个候选人的姓名和得票结果。
例如：
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:wang
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2



输入格式：
"Input vote %d:"
"%s"
输出格式：
"Election results:\n"
候选人姓名+"%8s:%d\n"
"Wrong election:%d\n"*/
#include <stdio.h>
#include <string.h>
struct candidate{
	int cnt;
	char name[20];
};
int main()
{
	int i,j;
	struct candidate tou[4]={
		{0,"li"},{0,"zhang"},{0,"wang"},{0,"Wrong election"}
	};
	char Name[10];
	for(i=0;i<10;i++)
	{
		printf("Input vote %d:",i+1);
		scanf("%s",&Name);
		for(j=0;j<sizeof(Name);j++)
		{
			if(Name[j]>='A'&&Name[j]<='Z') Name[j]+=32;
		}
		if(strcmp(Name,"li")==0) tou[0].cnt++;
		else if(strcmp(Name,"zhang")==0) tou[1].cnt++;
		else if(strcmp(Name,"wang")==0) tou[2].cnt++;
		else tou[3].cnt++;
	}
	
	printf("Election results:\n");
	printf("%8s:%d\n",tou[0].name,tou[0].cnt);
	printf("%8s:%d\n",tou[1].name,tou[1].cnt);
	printf("%8s:%d\n",tou[2].name,tou[2].cnt);
	printf("%8s:%d\n",tou[3].name,tou[3].cnt);
	return 0;
}

