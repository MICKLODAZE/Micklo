#include <stdio.h>
int main (void)
{
	int arr[10],p;
	for (int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
			}
		}
		printf("%d ",arr[i]);
	}
	printf("\n");
}
