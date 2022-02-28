/*#include<stdio.h>
int main()
{
	char word[12];
	scanf("%8s",word);
	printf("%s",word);
}*/
/*#include<stdio.h>
int main()
{
	char mouth[][10]={
		"January",
		"February"
	};
}*/
#include<stdio.h>
int main(int argc,char const *argv[])
{
	int i;
	
	scanf("%d",&argc);
	for(i=0;i<argc;i++)
	{
		scanf("%20s",argv);
		printf("%s\n",argv);
	}
}
