#include<stdio.h>
int main()
{
	union {						//���Ϊ8 
		int a;//4					[1][2][3][4][1][][][] 
		char b;//1					[1][2][3][4][5][6][7][8] 
	//	double c;//8				[][][][][][][][] 
	}x;
	printf("%d\n",sizeof(x));
	union {						//���Ϊ8 
		float b;//4					[1][2][3][4][1][2][3][4] 
		int a;//4					[1][2][3][4][5][6][7][8] 
		double c;//8				[][][][][][][][] 
	}y;
	printf("%d\n",sizeof(y));	
	{							//���Ϊ8 
		int a;//4					[1][2][3][4][][][][] 
		double c;//8				[1][2][3][4][5][6][7][8] 
		char b;//1					[1][][][][][][][] 
	}z;
	printf("%d\n",sizeof(z));
}
