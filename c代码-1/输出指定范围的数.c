#include <stdio.h>

int getint(int min, int max)
{	    		 		 
    int n;

    printf("Please enter an integer [%d..%d]:\n", min, max);
    while ((scanf("%d", &n) != 1) || (n < min) || (n > max))
    {	    		 		 
        printf("Please enter an integer [%d..%d]:\n", min, max);
    }
    return n;
}	    		 		 

int main()
{	    		 		 
    int m;
    int min, max;
    scanf("%d,%d", &min, &max);

    m = getint(min, max);

    printf("The integer you have entered is:%d\n", m);

    return 0;
}	   
