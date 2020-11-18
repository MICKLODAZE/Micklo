#include <stdio.h>
int main (void)
{
	int var,i;
	printf("请输入一个数:\n");
	scanf("%d",&var);
	for(i=0;i<=100;i++)
	{
		if(var%3==0&&var%5==0)
			printf("%d",var);
	}
	printf("一共有%d个\n",var);
}
