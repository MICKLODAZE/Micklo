#if 0
#include <stdio.h>
int main (void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int a;
	printf("请输入一个数:");
	scanf("%d",&a);
	
	for(int i=0;i<10;i++)
	{
		if(a==arr[i])
		{
			printf("%d在第%d个\n",a,i+1);
		}
	}
	return 0;
}
#endif

#include <stdio.h>
int main ()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n,a;
	n=sizeof(arr)/sizeof(int);
	printf("输入一个数:");
	scanf("%d",&a);

	for(int i=0;i<=n;i++)
	{
		n=n/2;
		if(arr[i]==a)
		printf("%d",arr[i]);
		else
		for(int j=5;j<=10;j++)
		{
			if(arr[j]==a)
			printf("%d",arr[i]);
		}
	}

	return 0;
}
