#include <stdio.h>
int main (void)
{
	int nu[10];
	int count=0;
	printf("请输入十个成绩:");

	for(int i=0;i<10;i++)
	{
		scanf("%d",&nu[i]);
		if(nu[i]<=60)
		{
			count++;
			printf("%d ",nu[i]);
		}
	}

	printf("\n%d个\n",count);
	return 0;
}
