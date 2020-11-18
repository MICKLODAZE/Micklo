#include <stdio.h>
int main (void)
{
	int nu;
	int sum=0;
	printf("请输入一个小于5的正整数:");
	scanf("%d",&nu);
	if(nu<=5)
	{
		for(int i=nu;i<nu+5;i++)
		{
			sum=sum*10+i*10;
		}
		printf("%d",sum);
	}
	else
		printf("请输入一个小于5的正整数!");
	return 0;
}
