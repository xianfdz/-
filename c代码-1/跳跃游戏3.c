int tiao(int t,int cnt,int A[4])
{
	for(j=0;j<=4;j++)
		{
			t+=A[j];
			cnt++;
			if(t==A[4])
			{
				printf("%d\n",cnt);
				goto END; 
			}else{
				cnt=1;
				t=A[i];
			}	
		}
}
