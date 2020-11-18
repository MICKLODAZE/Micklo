#include <stdio.h>
int main (void)
{
	int score,type;
	printf("请输入你的成绩:\n");
	scanf("%d",&score);
	type=score/10;
	if(type>=9&&type<=10)
		printf("A");
	else if(type>8&&type<=9)
		printf("B");
	else if(type>7&&type<=8)
		printf("c");
	else if(type>6&&type<=7)
		printf("D");	
	else if(type>=0&&type<=6)
		printf("E");
}
