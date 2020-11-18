#include <stdio.h>
int main (void)
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int p,n;
	float sum=0;
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
			}
		}
		sum+=arr[i];
	}
	printf("最大值:%d,最小值:%d,平均值:%f\n",arr[9],arr[0],sum/10);
	return 0;
}
