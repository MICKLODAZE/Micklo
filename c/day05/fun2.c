#include <stdio.h>
int main ()
{
	char str[]="hello world";
	printf("长度为%ld\n",sizeof(str));
	for(int i=0;i<10;i++)
	{
		if(str[i]=='\0')
			printf("yes");
	}
}
