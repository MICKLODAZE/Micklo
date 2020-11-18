#include <stdio.h>
int mystrcpy (char dest[],char src[]);
int mystrcat (char dest[],char src[]);
int main (void)
{
	char arr1[]="hello world",arr2[]="nice to meet you";
	mystrcat(arr1,arr2);
	printf("%s",arr1);
}

int mystrcpy (char dest[],char src[])
{
	int i=0;
	for(i=0;src[i]!=0;i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}

int mystrcat (char dest[],char src[])
{
	int i;
	for(i=0;dest[i];i++);
	mystrcpy(dest+i,src);
}
