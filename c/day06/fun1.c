#include <stdio.h>
int main (void)
{
	int i=10,j=20;
	int *p;
	int *n;
	printf("%d,%d\n",i,j);
	p=&j;
	n=&i;
	printf("%d,%d\n",*p,*n);

	return 0;
}
