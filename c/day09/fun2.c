#include <stdio.h>
typedef int *TYPEA;
#define TYPEB int *
int main (void)
{
	TYPEA p1,p2;
	TYPEB q1,q2;
	printf("%ld %ld %ld %ld\n",sizeof(p1),sizeof(p2),sizeof(q1),sizeof(q2));

	return 0;
}
