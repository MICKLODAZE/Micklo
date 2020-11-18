#include <stdio.h>

struct student_st {

	char *name;
	int age;
	float score;

};

int main (void)
{
	struct student_st *p;
	struct student_st s1={"wdnmd",20,100};
	struct student_st s2={"zbc",21,99};

	p=&s2;

	printf("%s,%d,%f\n",s1.name,s1.age,s1.score);
	printf("%s,%d,%f\n",p->name,p->age,p->score);

	return 0;
}
