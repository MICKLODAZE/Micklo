#include <stdio.h>
int main (void)
{
	int year,month,day;
	int sumdays=0;
	printf("请输入年月日:\n");
	scanf("%d/%d/%d",&year,&month,&day);

	switch (month-1)
	{
		case 11 :
			sumdays+=31;
		case 10 :
			sumdays+=31;
		case 9 :
			sumdays+=30;
		case 8 :
			sumdays+=31;
		case 7 :
			sumdays+=31;
		case 6 :
			sumdays+=30;
		case 5:
			sumdays+=31;
		case 4 :
			sumdays+=30;
		case 3 :
			sumdays+=31;
		case 1 :
			sumdays+=31;
		case 2 :
			sumdays+=28+(year%4==0&&year%100!=0||year%400==0);
		default;
		sumdays+=day;
	}
	printf("这是这一年中的%d天\n",sumdays);

	return 0;
}
