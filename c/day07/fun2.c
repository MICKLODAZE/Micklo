#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *reverstring (const char *s);
int main ()
{
	void *ret;

	reverstring();
	printf("hello world");
	puts(ret);

	free(ret);
	ret=NULL;

	return 0;
}

char *reverstring (const char *s)
{
	char *res=(char *)malloc(strlen(s)+1);
	if(NULL==res)
		return NULL;
	for(int i=0,j=strlen(s)-1;j>=0;i++,j--)
		res[i]=s[j];

	return res;
}
