#include <stdio.h>
int main (void)
{
	int a,b,c;
	printf("a=%d\n",(b=c=3,++c,b+=c));
	return 0;
}
