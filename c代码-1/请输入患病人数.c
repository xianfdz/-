//���д�����ύ��������н����ͼ��

//�������ÿ������ش�2/26�յ�3/19ȷ�ﲡ���ĸ�����ͳ�Ʋ����ÿ��������ۼ�ȷ����ܸ�����
//�Լ�13��������ۼ�ȷ����ܸ���
#include <stdio.h>
int main()
{
	int x,n,i,sum,t,h,j;
	t=0;
	for(i=1;i<=13;i++)
	{
		sum=0;
		switch(i)
		{
		    case 1:
			printf("���������뱱����2/26�յ�3/19ȷ�ﲡ���ĸ�����\n");
			break;
			case 2:
			printf("��������������2/26�յ�3/19ȷ�ﲡ���ĸ�����\n");
			break; 
			case 3:
			printf("����������㶫��2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 4:
			printf("�����������Ϻ���2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 5:
			printf("�����������㽭��2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 6:
			printf("����������ɽ����2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 7:
			printf("�������������ϴ�2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 8:
			printf("����������������2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 9:
			printf("�����������������2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 10:
			printf("�����������Ĵ���2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 11:
			printf("���������������2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 12:
			printf("������������ϴ�2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
			case 13:
			printf("�������������Ĵ�2/26�յ�3/19ȷ�ﲡ���ĸ�����\n"); 
			break;
		}
		for(h=1;h<=23;h++)
		{
			scanf("%d",&n);
			sum+=n;
			t+=n;
	    	}
		switch(i)
		    {
		    	case 1:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum);
				break;
				case 2:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum);
				break; 
				case 3:
				printf("�㶫�ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 4:
				printf("�Ϻ��ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 5:
				printf("�㽭�ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 6:
				printf("ɽ���ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 7:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 8:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 9:
				printf("�������ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 10:
				printf("�Ĵ��ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 11:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 12:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
				case 13:
				printf("�����ۼ�ȷ����ܸ���Ϊ��%d\n",sum); 
				break;
			}
		}
	printf("13��������ۼ�ȷ����ܸ���Ϊ:%d",t);
}





