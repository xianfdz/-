#include<stdio.h>
#include<stdlib.h>
int cmp(const void *p1,const void *p2);
int main(void)
{
    int m,n;
    scanf("%d%d",&n,&m);
    int i,j;
    int q;
    int a[100][100]={0};
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
            a[i][j]=a[i-1][j]+a[i][j-1]+a[i][j]-a[i-1][j-1];
        }
    }
    scanf("%d",&q);
    while(q--){
        int x1,x2,x3,x4,y1,y2,y3,y4;
        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        int num1[4],num2[4];  
        num1[0]=x1,num1[1]=x2,num1[2]=x3,num1[3]=x4;
        num2[0]=y1,num2[1]=y2,num2[2]=y3,num2[3]=y4;
        qsort(num1,4,sizeof(int),cmp);
        qsort(num2,4,sizeof(int),cmp);  //排序后可知相交矩形的坐标
        int sum=0;  //sum的类型需要注意
        if(x3>x2||y3>y2||x1>x4||y1>y4)  //若不相交
        sum=a[x2][y2]-(a[x1-1][y2]+a[x2][y1-1])+a[x1-1][y1-1]
            +a[x4][y4]-(a[x3-1][y4]+a[x4][y3-1])+a[x3-1][y3-1];
        else  //相交
            sum=a[x2][y2]-(a[x1-1][y2]+a[x2][y1-1])+a[x1-1][y1-1]
                +a[x4][y4]-(a[x3-1][y4]+a[x4][y3-1])+a[x3-1][y3-1]
                -(a[num1[2]][num2[2]]-(a[num1[2]][num2[1]-1]+a[num1[1]-1][num2[2]])+a[num1[1]-1][num2[1]-1]);
                //用num数组存储的坐标获得相交矩形，并减去
        printf("%d\n",sum);
    }
    return 0;
}
int cmp(const void *p1,const void *p2)
{
    return *(int*)p1-*(int*)p2;
}

