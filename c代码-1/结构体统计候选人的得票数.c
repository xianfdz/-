/*���ͳ�ƺ�ѡ�˵ĵ�Ʊ����
����3����ѡ��zhang��li��wang����ѡ�����������ִ�Сд����
10��ѡ��ѡ��ÿ������һ����Ʊ�ĺ�ѡ�˵����֣���ѡ������ѡ��������
�򰴷�Ʊ����ѡ��ͶƱ����������Զ���ʾ����ѡ�˵ĵ�Ʊ����ͷ�Ʊ��Ϣ��
Ҫ���ýṹ������candidate��ʾ3����ѡ�˵������͵�Ʊ�����
���磺
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



�����ʽ��
"Input vote %d:"
"%s"
�����ʽ��
"Election results:\n"
��ѡ������+"%8s:%d\n"
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

