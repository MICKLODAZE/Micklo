#include <stdio.h>
int num(int m,int n,int p);
int main ()
{
	int var=10;
	num(var++,var++,var++);
	return 0;
}

int num(int m,int n,int p)
{
	printf("m=%d,n=%d,p=%d\n",m,n,p);
}
