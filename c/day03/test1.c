#include <stdio.h>
int main (void)
{
	int money[4]={50,20,10,5};
	int tottle=500;
	int count=0;
	for(int i=0;i<100;i++)
	{
		if(tottle>0)
		{
			for(int j=0;j<4;j++)
			{
				tottle=tottle-money[j];
				count++;
				printf("%d\n",tottle);
			}
		}
	}
	printf("%d\n",count);


	return 0;
}
