#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int is_prime (int arr[]);
#define N 20
int main (void)
{
	int arr[N]={};

	srand(getpid());
	for(int i=0;i<N;i++)
	{
		arr[i]=rand()%100;
		printf("%d ",arr[i]);
	}
	printf("\n");
	is_prime(arr);

	return 0;
}

int is_prime (int arr[])
{
	int i=0;
	for(int j=2;j<arr[i];j++)
	{
		for(;i<N;i++)
		{
			if(arr[i]%j==0)
				printf("%d ",arr[i]);
		}
	}
	printf("\n");
}
