#include <stdio.h>
int main (void)
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int t,n;
	n=sizeof(arr)/sizeof(int);
	for(int i=1;i<n;i++)
	{
		t=arr[i];
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]arr[j+1])
			arr[j+1]=arr[j];
		}
	}
}
