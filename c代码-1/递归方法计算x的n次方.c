//���õݹ鷽������x��n�η���
//**�����ʽҪ��"%d%d" ��ʾ��Ϣ��"x=? n=?"
//**�����ʽҪ��"%d**%d=%d\n"
//��������ʾ�����£�
//x=? n=?2 8
//2**8=256
#include <stdio.h>
int cifang(int x,int n); 
int main()
{
	int x,n;
	int q;
	printf("x=? n=?");
	scanf("%d %d",&x,&n);
	q=cifang(x,n);
	printf("%d**%d=%d",x,n,q);
}
int cifang(int x,int n)
{
	int t=x;
	if(n>1)
	{
     t=x*cifang(x,n-1);		
	}else{
		return t;
	}

}
