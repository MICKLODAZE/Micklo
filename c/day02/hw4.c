#include <stdio.h>
int main (void)
{
	int var;
	int res=0;
	printf("请输入一个整形数:");
	scanf("%d",&var);

	var=var | (0x1<<3);
	var=var & ~(0x1<<5);
	printf("%d\n",var);
}
