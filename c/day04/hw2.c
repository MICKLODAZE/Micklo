#include <stdio.h>
int main (void)
{
	int arr[10]={0},p;
	float sum=0;
	printf("请输入十个数:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		for(int j=i+1;j<10;j++)
		{
			if(arr[i]<arr[j])
			{
				p=arr[i];
				arr[i]=arr[j];
				arr[j]=p;
			}
		}
		sum+=arr[i];
	}
	printf("最大值是:%d,最小值是:%d,平均值是:%f\n",arr[9],arr[0],sum/10);
}
