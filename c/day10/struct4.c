#include <stdio.h>
typedef struct {
	char a;
	short b;
	int e;
	int d;
}st;
int main (void)
{
	st s;
	printf("%ld\n",sizeof(s));

	return 0;
}
