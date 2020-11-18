#include <stdio.h>
union test{
	char a;
	int b;
};
int main (void)
{
	union test t;
	t.b=0x12345678;
	printf("0x%x\n",t.a);

	return 0;
}
