#include <stdio.h>
int is_leap (int y);
int main (void)
{
	int year;
	printf("请输入一个年份:");
	scanf("%d",&year);
	if (is_leap(year))
		printf("%d是闰年\n",year);
	else
		printf("%d是平年\n",year);

	return 0;
}

int is_leap (int y)
{
	return y%4==0&&y%100!=0||y%400==0;
}
