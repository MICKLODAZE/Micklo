#include <stdio.h>
int main (void)
{
	printf("int=%ld\n",sizeof(int));
	printf("char=%ld\n",sizeof(char));
	printf("double=%ld\n",sizeof(double));
	printf("long=%ld\n",sizeof(long));
	printf("long long=%ld\n",sizeof(long long));
	printf("long double=%ld\n",sizeof(long double));
	printf("short=%ld\n",sizeof(short));
	printf("float=%ld\n",sizeof(float));

	return 0;
}
