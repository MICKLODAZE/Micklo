#include <stdio.h>
typedef struct {
	int score;
	char name[10];
	int age;
}stu;
int main (void)
{
	int p,max,min;
	stu s[10];
	printf("请输入姓名和分数:");
	for(int i=0;i<10;i++)
	{
		printf("第%d个学生的成绩:",s[i]);
		scanf("%d",&s[i].score);
		printf("第%d个学生的姓名:",s[i]);
		scanf("%s",s[i].name);
		printf("第%d个学生的年龄:",s[i]);
		scanf("%d",s[i].age);

		if(max>s[i].score)
			s[i].score=max;
		if(min<s[i].score)
			s[i].score=min;
	}
	printf("最高分为:%d",[]);

	return 0;
}
