#include <stdio.h>
int even_nu (int n);
int main (void)
{
	int var;
	int even=0;
	printf("请输入一个数:");
	scanf("%d",&var);
	even=even_nu(var);
	printf("偶数位和为:%d\n",even);
	return 0;
}

int even_nu (int n)
{
	int res;
	int sum=0;
	while(n>0)
	{
		res=n%10;
		n=n/10;
		if(res%2==0)
		{
			sum+=res;
		}
	}
	return sum;
}
