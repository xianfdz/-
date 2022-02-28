#include <stdio.h>
int main()
{
	int score;
	printf("Please enter score:");
	scanf("%d",&score);
	score=score/10;
	switch(score)
	{
		case 9:
			printf("%d--A\n",score);
			break;
	    case 8:
			printf("%d--B\n",score);
			break;
		case 7:
			printf("%d--C\n",score);
			break;
			
		case 6:
			printf("%d--D\n",score);
			break;
		case 5:
			printf("%d--E\n",score);
			break;
		default:
			printf("Input error!");
			break;
	}
	return 0;
	
} 
