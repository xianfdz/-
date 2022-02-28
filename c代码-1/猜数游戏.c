#include <stdio.h>
int main()
{
	int number,n;
	int cnt=0;
	int inp;
	int finish=0;
	scanf("%d %d",&number,&n);
	do
	{
	scanf("%d",&inp);
	cnt++;
	if(inp<0){
		printf("Game Over\n"); 
		finish=1;
	}else if(inp>number){
		printf("Too big\n");
	}else if(inp<number){
		printf("Too small\n");
	}else{
	if(cnt==1){
		printf("Bingo!\n");
	}else if(cnt<=3){
		printf("Lucky You!\n");
	}else{
		printf("Good Guess!\n");
	}
	finish=1;
	}
	if(cnt==n){
		if(!finish){
		printf("Game Over\n");
		finish=1;
		}
	}
    }while(!finish);
    return 0;
}
