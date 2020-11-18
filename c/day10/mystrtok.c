#include <stdio.h>
#include <string.h>
int main (char *argc,char *argv[])
{
	char *p=NULL;
	p=strtok(argc,argv[1]);
	while (p!=NULL)
	{
		printf("%s\n",p);
	}

	return 0;
}
