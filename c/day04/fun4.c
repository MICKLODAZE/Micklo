#include <stdio.h>
int main (void)
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int p,n;
	float sum=0;
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				p=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=p;
			}
		}
		sum+=arr[i];
	}
	printf("最大值:%d,最小值:%d,平均值:%f\n",arr[9],arr[0],sum/10);

	return 0;
}
