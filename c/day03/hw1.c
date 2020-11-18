#include <stdio.h>
int factorial (int var);
int is_prime (int p);
int is_nar (int n);
int comp (int a,int b);
int invers (int n);
int main (void)
{
	#if 0
	int var;
	int fac=1;
	printf("请输入一个数:");
	scanf("%d",&var);
	factorial(var);
	#endif

	#if 0
	int var;
	printf("请输入一个数:");
	scanf("%d",&var);
	if(is_prime(var))
		printf("%d是质数\n",var);
	else
		printf("%d不是质数\n",var);
	#endif
	
	#if 0
	int in;
	int res=0;
	printf("请输入一个数:");
	scanf("%d",&in);
	if(is_nar(in)==in)
	{
		printf("%d是水仙花数\n",in);
	}
	else
		printf("%d不是水仙花数\n",in);
	#endif

	#if 0
	int a,b;
	printf("请输入两个数:");
	scanf("%d%d",&a,&b);
	comp(a,b);
	#endif

	#if 1
	int var;
	printf("请输入一个数:");
	scanf("%d",&var);
	invers(var);
	#endif

	return 0;
}

int factorial (int var)
{
	int fac=1;
	for (int i=1;i<=var;i++)
	{
		fac*=i;
		printf("%d",i);
		printf("*");
	}
	printf("\b=%d\n",fac);
}

int is_prime (int p)
{
	for(int i=2;i<p;i++)
	{
		if(p%i==0)
			return 0;
	}
	return 1;
}

int is_nar (int n)
{
	int in;
	int sum=0;
	while(n>0)
	{
		in=n%10;
		sum+=in*in*in;
		n=n/10;
	}
	return sum;
}

int comp (int a,int b)
{
	if(a>b)
		printf("%d>%d\n",a,b);
	else
		printf("%d<%d\n",a,b);
}

int invers (int n)
{
	int in=0;
	while(n>0)
	{
		in=in*10+n%10;
		n=n/10;
	}
	printf("%d\n",in);
}
