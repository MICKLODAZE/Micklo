#include <stdio.h>
int main (void)
{
	int arr1[3];
	int arr2[3]={0};
	int arr3[3]={1};
	int arr4[10]={1,2,[7]=99};
	for(int i=0;i<3;i++)
	{
		printf("%d ",arr1[i]);
		printf("\n");
	}

	return 0;
}
