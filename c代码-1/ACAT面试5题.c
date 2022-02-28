#include<stdio.h>
int main()
{
	union {						//最大为8 
		int a;//4					[1][2][3][4][1][][][] 
		char b;//1					[1][2][3][4][5][6][7][8] 
	//	double c;//8				[][][][][][][][] 
	}x;
	printf("%d\n",sizeof(x));
	union {						//最大为8 
		float b;//4					[1][2][3][4][1][2][3][4] 
		int a;//4					[1][2][3][4][5][6][7][8] 
		double c;//8				[][][][][][][][] 
	}y;
	printf("%d\n",sizeof(y));	
	{							//最大为8 
		int a;//4					[1][2][3][4][][][][] 
		double c;//8				[1][2][3][4][5][6][7][8] 
		char b;//1					[1][][][][][][][] 
	}z;
	printf("%d\n",sizeof(z));
}
