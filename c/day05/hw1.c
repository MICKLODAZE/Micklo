#include <stdio.h>
#include <stdlib.h>

#define S 20
#define N 11

int main (void)
{
	int i,j;
	int arr1[S],arr2[N],grade[]={};
	for(i=0;i<S;i++)
	{
		printf("请输入20个学生的成绩:");
		//scanf("%d",&arr1[i]);
		arr1[i]=rand()%101;
		grade[arr1[i]/10]++;
	}
	printf("\n");

	printf("100:");
	for(i=0;i<grade[10];i++)
		printf("* ");
	printf("\n");
	for(i=9;i>=0;i--)
		printf("%2d~%2d:",i*10,i*10+9);
	for(j=0;j<grade[i];j++)
		printf("* ");
	printf("\n");
	return 0;
}
