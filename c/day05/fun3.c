#include <stdio.h>
int mystrcpy(char dest[],char src[]);
int main (void)
{
	char arr1[]="",arr2[]="hello world";
	mystrcpy(arr1,arr2);
	printf("%s\n",arr1);

	return 0;
}

int mystrcpy(char dest[],char src[])
{
	int i;
	for(i=0;src[i]!=0;i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
}
