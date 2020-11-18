#include <stdio.h>
#include <string.h>
char *mystrncpy (char *dest,char *src,int size);
char *mystrcat (char *dest,char *src);
char *mystrncat (char *dest,char *src,int size);
int main (void)
{
	int size;
	char *ret;
	char dest[]="nice to meet you",src[]="hello world";
	printf("请输入限制长度:");
	scanf("%d",&size);
	//ret=mystrncpy(dest,src,size);
	//printf("%s\n",mystrncpy(dest,src,size));
	printf("%s\n",mystrncat(dest,src,size));

	return 0;
}

char *mystrncpy (char *dest,char *src,int size)
{
	char *ret=dest;
	int i;
	for(i=0;src[i],i<size-1;i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';

	return ret;
}

char *mystrcat (char *dest,char *src)
{
	char *ret=dest;
	while (*dest)
		dest++;
	strcpy(dest,src);

	return ret;
}

char *mystrncat (char *dest,char *src,int size)
{
	char *ret=dest;
	int dest_len=strlen(dest);
	int i;
	for(i=0;i<size&&src[i];i++)
	{
		dest[dest_len+i]=src[i];
	}
	dest[dest_len+i]='\0';

	return ret;
}
