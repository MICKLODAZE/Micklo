#include <stdio.h>
int main (void)
{
	int var;
	int sum=0;
	printf("请输入一个两位数:\n");
	scanf("%d",&var);

	if(var>=10&&var<100)
	{
		for (int i=0;i<2;i++)
		{
			sum=sum*10+var%10;
			var=var/10;
		}
		printf("这个数的逆序数是:%d\n",sum);
	}
	else
		printf("请输入一个两位数!\n");
}
