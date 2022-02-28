#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char **p=(char**)malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++){
        p[i]=(char*)malloc(sizeof(char)*m);
        gets(p[i]);
        puts(p[i]);
    }
    return 0;
}