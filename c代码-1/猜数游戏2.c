#include <stdio.h>
int main()
{
	int number,n;
	int cnt=0;
	int finished=0;
	int inp;
	scanf("%d %d",&number,&n);
	do{
		cnt++;
		scanf("%d",&inp);
		if(inp>number){
			printf("Too big\n");
		}else if(inp<number){
			printf("Too small\n");
		}else if(inp<0){
			finished=1;
		}else if(cnt==1){
			printf("Bingo!\n");
		}else if(cnt<=3){
			printf("Lucky you!\n");
		}else if(cnt>3){
			printf("Good Guess!\n");
		}
		if(cnt>=n&&!finished){
			printf("Game Over\n");
			finished=1;
		}
		
	}while(!finished); 
}
