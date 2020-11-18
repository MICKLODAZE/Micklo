#include <stdio.h>
int prime(int n);
int main (void)
{
	int var;
	printf("请输入一个整形数:");
	scanf("%d",&var);

	if(prime(var))
	{
		printf("是质数\n");
	}
	else
		printf("不是质数\n");
	return 0;
}

int prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
