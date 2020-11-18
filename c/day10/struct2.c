#include <stdio.h>
#include <string.h>
typedef struct {

	int score;
	char name[32];

}stu;
int main (void)
{
	stu s1;
	s1.score =99;
	strncpy(s1.name,"mcl",31);
	printf("%d,%s\n",s1.score,s1.name);

	return 0;
}
