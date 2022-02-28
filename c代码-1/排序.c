/*选美比赛
  在选美大奖赛的半决赛现场，有一批选手参加比赛，比赛的规则是最后得分越高，名次
  越低。当半决赛结束时，要在现场按照选手的出场顺序宣布最后得分和最后名次，获得
  相同分数的选手具有相同的名次，名次连续编号，不用考虑同名次的选手人数。例如：
     选手序号：    1，2，3，4，5，6，7
     选手得分：    5，3，4，7，3，5，6
     则输出名次为：3，1，2，5，1，3，4
    请编程帮助大奖赛组委会完成半决赛的评分排名工作。
**输出格式要求："  Player_NO  Score  Rank\n" "   %3d    %4d   %4d\n"
程序运行示例如下：
 Player_NO  Score  Rank
     1       5      3
     2       3      1
     3       4      2
     4       7      5
     5       3      1
     6       5      3
     7       6      4*/
#include<stdio.h>
int main()
{
	int player[7];
	int score[7];
	int rank[7];
	printf("请依次输入7位选手得分："); 
	int i,j,k;
	for(i=0;i<7;i++){
		scanf("%d",&score[i]);
		player[i]=i+1;
		rank[i]=0;
	}
	
		
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++){
			if(score[i]<score[j]) {
				rank[i]=rank[i]+1;
			}
		}
	}
	printf("  Player_NO  Score  Rank\n");
	for(i=0;i<7;i++)
		printf("   %3d    %4d   %4d\n",player[i],score[i],rank[i]);
	return 0;
} 
