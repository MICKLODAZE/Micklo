#include <stdio.h>
int main (void)
{
	#if 0
	for(int i=0;i<=10;i++)
	{
		for(int j=0;j<=10-i;j++)
		{
			printf("  ");
		}
		for(int k=0;k<2*i-1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	#endif
	
	#if 0
	for(int i=0;i<=10;i++)
	{
		printf("* * * *\n");
		for(int j=0;j<=i;j++)
		printf("  ");
	}
	printf("\n");
	#endif

	#if 1
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("%c ",'A'+j);
		}
		printf("\n");
	}
	#endif
	return 0;
}
