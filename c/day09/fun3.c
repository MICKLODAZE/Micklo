#include <stdio.h>
int main (int argc,int **argv)
{
	char *arr[3]={"hello","world","plese"};

	for(int i=0;i<argc;i++)
	{
		puts(argv[i]);
	}

	return 0;
}
