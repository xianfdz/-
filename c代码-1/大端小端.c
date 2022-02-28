#include <stdio.h>
int le( ){
	union hu {
		char c;
		int i;
	}m;
	m.i=1;
	printf("%d\n",m.c);
	return m.c;
}
int main()
{
	int t;
	t=le();
	if(t==1) printf("Ð¡¶Ë");
	else printf("´ó¶Ë");	
}
