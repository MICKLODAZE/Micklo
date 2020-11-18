#include <stdio.h>
int main (void)
{
	int var=18;
	int res=0;

	res=var|(0x1<<3);
	printf("res=%d\n",res);

	res=var&~(0x1<<3);
	printf("res=%d\n",res);

	res=var^15;	
	printf("res=%d\n",res);

	printf("交换前:var=%d,res=%d\n",var,res);
	var=var^res;
	res=var^res;
	var=var^res;
	printf("交换后:var=%d,res=%d\n",var,res);

	var=0;
	res=0;
	res=var++;
	printf("res=%d,var=%d\n",res,var);

	res=++var;
	printf("res=%d,var=%d\n",res,var);

	var=0;
	res=res && var++;
	printf("res=%d,var=%d\n",res,var);

	res=1 || var++;
	printf("res=%d,var=%d\n",res,var);

	res=(var,var+10,var++);
	printf("res=%d,var=%d\n",res,var);

	return 0;
}
