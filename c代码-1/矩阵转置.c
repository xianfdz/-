#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
    int n[m][m];
    int i, j, temp;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		scanf("%d",&n[i][j]);
    	}
    }
    printf("ԭʼ����\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", n[i][j]);  /*���ԭʼ����*/
        printf("\n");
    }
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            if (j>i)
            {  /*�����Խ������Ϸ�������Ԫ�������Խ������·�������Ԫ�ؽ��е����򽻻�*/
                temp=n[i][j];
                n[i][j]=n[j][i];
                n[j][i]=temp;
            }
        }
    printf("ת�þ���\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", n[i][j]);  /*���ԭʼ�����ת�þ���*/
        printf("\n");
    }
    return 0;
}
