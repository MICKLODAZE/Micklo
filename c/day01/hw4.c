#include <stdio.h>
int main (void)
{
	int x=10;
	printf("x=%d\n",x+=x-=x-x);
	return 0;
}
