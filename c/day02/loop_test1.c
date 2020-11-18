#include <stdio.h>
int main (void)
{
	int loop;
	int sum=0;
	printf("请输入一个整形数:\n");
	scanf("%d",&loop);
	for(int i=0;i<=loop;i++)
	{
		sum+=i;
	}
	printf("和为%d\n",sum);
	return 0;
}
