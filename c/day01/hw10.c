#include <stdio.h>
int main (void)
{
	int x=0,y=0,z=0;
	++x||++y||++z;
	printf("%d %d %d\n",x,y,z);
	return 0;
}
