/*��дһ����ʵ�����¹��ܣ� �ֱ������º�����
��1������༶�ɼ�������ĳ��ѧ��ĳ�ſεĳɼ�����಻����30�ˣ���������Ϊ����ʱ����ʾ���������
��2����ƽ���ɼ��ĺ�������������ֵ����ƽ���ɼ���
��3����д����ͳ�Ƴɼ�����ƽ���ֵ�ѧ�������İٷֱȣ������� ,
(4)��������ͨ���������Ϻ������ɼ�����ƽ���ֵ�ѧ�������İٷֱȡ����ύ��������н����*/
#include <stdio.h>
int shuru(double a[])
{
	int i,cnt=0;
	double t;
	printf("����������ÿ��ѧ���ĳɼ���\n"); 
	for(i=0;i<30;i++)
	{
		scanf("%lf",&t);
		if(t<0) break;
		else 
		{
			a[i]=t;
			cnt++;
		}	
	}
	return cnt;
}
	
double average(double a[],int cnt)
{
	int i;
	double sum=0;
	for(i=0;i<cnt;i++){
		sum+=a[i];
	}
	return sum/cnt;
}
double di(double a[],double aver,int cnt)
{
	double sum=0;
	int i;
	for(i=0;i<cnt;i++){
		if(a[i]<aver) sum+=1;
	}
	return sum/cnt*100;
} 
int main()
{
	double a[30],aver;
	int cnt;
	cnt=shuru(a);
	aver=average(a,cnt);
	printf("ѧ����ƽ���ɼ�Ϊ%0.2f\n",aver);
	printf("����ƽ���ֵ�ѧ��ռ������%0.2f%%\n",di(a,aver,cnt));
}
