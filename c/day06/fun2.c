#include <stdio.h>
int mystrlen (char *p,int *len);
int main (void)
{
	char *ptr="nice to meet you";
	int length;
	mystrlen(ptr,length);
	printf("%s的长度是%d\n",ptr,length);
	
	return 0;
}

int mystrlen (char *p,int *len)
{
	*len=0;
	while(*p++)
		*len++;
}
