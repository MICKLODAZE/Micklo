#include <stdio.h>
int div_mul (int a,int b);
int main (void)
{
	int a,b;
	printf("请输入两个数:");
	scanf("%d%d",&a,&b);
	div_mul(a,b);
}

int div_mul (int a,int b)
{
	int c,m,t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	m=a*b;
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("最大公约数是:%d\n",b);
	printf("最小公倍数是:%d\n",m/b);
}
