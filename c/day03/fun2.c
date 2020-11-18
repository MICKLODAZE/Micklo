#include <stdio.h>
int is_leap (int y);
int days_years (int m);
int main (void)
{
	int year,month;
	int day=0,sumdays=0;
	printf("请输入年月:");
	scanf("%d/%d",&year,&month);
	for(int i=1800;i<year;i++)
	{
		day+=365+is_leap(year);
	}
	for(int i=1;i<month;i++)
	{
		sumdays+=days_years(i);
	}
	printf("%d",sumdays+day);

	return 0;
}

int is_leap (int y)
{
	return y%4==0&&y%100!=0||y%400==0;
}

int days_years (int m)
{
	int sumday=0;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		sumday+=31;
	}
	else if(m==4||m==6||m==9||m==11)
	{
		sumday+=30;
	}
	else if(m==2)
		sumday+=28+is_leap();
}
