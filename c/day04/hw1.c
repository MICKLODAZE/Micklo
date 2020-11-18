#include <stdio.h>
int main ()
{
	int arr[10];
	int pos=0,neg=0,zer=0;
	printf("请输入十个数:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else if(arr[i]==0)
		{
			zer++;
		}
	}
	printf("正数有%d个,负数有%d个,零有%d个\n",pos,neg,zer);
	
	return 0;
}
