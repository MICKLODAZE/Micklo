#include <stdio.h>
int main (void)
{
	int score[5]={0},p;
	float sum=0;
	printf("请输入成绩:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&score[i]);
		for(int j=i+1;j<5;j++)
		{
			if(score[i]<score[j])
			{
				p=score[i];
				score[i]=score[j];
				score[j]=p;
			}
		}
		sum+=score[i];
	}
	printf("平均值是:%f\n",sum/10);
}
