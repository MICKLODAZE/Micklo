#include <stdio.h>
int main (void)
{
	int var;
	int res=0;
	printf("请输入一个整形数:\n");
	scanf("%d",&var);

	for(int i=0;i<var;i++)
	{
		res=var%10;
		var=var/10;
	}
	printf("%d",res);
	return 0;
}
