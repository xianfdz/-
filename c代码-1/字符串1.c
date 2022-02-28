#include <stdio.h>
#include <string.h>
int main()
{
    char fu[5][100];
    //ar *p[5],*p2;
    char temp[100];
    int i, k;
    for (i = 0; i < 5; i++)
    {
        scanf("%s", fu[i]);
        //p[i]=fu[i];
    }
    for (i = 0; i < 4; i++)
    {
        for (k = 0; k < 4 - i; k++)
        {
            if (strcmp(fu[k], fu[k + 1]) > 0)
            {
                strcpy(temp, fu[k]);
                strcpy(fu[k], fu[k + 1]);
                strcpy(fu[k + 1], temp);
            }
        }
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", fu[i]);
    }
    return 0;
}

