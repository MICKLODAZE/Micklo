#include <stdio.h>
int main (void)
{
	int t;
	float s,q;
	printf("请输入一个月的通话时间:");
	scanf("%d",&t);
	s=t*0.6;
	q=50+(t*0.4);
	printf("神州行%f\n",s);
	printf("全球通%f\n",q);
	printf("\n");
	if(s>q)
		printf("全球通更优惠\n");
	else
		printf("神州行更优惠\n");
		
	return 0;
}
