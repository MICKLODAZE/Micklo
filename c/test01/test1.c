#include <stdio.h>
int main ()
{
	long double pro=1;
	for(int i=1;i<=200;i++)
	{
		pro*=i;
	}
	printf("乘积为%Lf\n",pro);

	return 0;
}
