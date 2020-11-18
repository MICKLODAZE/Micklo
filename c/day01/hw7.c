#include <stdio.h>
int main (void)
{
	int x=5,y=5,z=5;
	printf("res=%d\n",(x=y=6,x+y,x+1));
	return 0;
}
