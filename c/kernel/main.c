#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "list.h"
#define NAMESIZE 32
struct stu_st{
	struct list_head node;
	int id;
	char name[NAMESIZE];
};

int main (void)
{
	int ids[]={2,5,7,8,5,6,3,1,9,0,4};
	struct stu_st *s;
	struct list_head *p;
	LIST_HEAD(head);
	for(int i=0;i<sizeof(ids)/sizeof(*ids);i++)
	{
		s->ids=ids[i];
		snprintf(s->name,NAMESIZE,"stu%d",i+1);
		list_add_tail(&s->node,&head);
	}
	list_for_each(p,&head)
	{
		s=list_entry(p,struct stu_st,node);
		printf("%s %d\n",s->name,s->id);
	}
	list_for_each(p,&head)
	{
		s=list_entry(p,struct stu_st,node);
		if(strcmp(s->name,"stu5"==0))
		{
			list_del(&s->node);
			free(s);
			break;
		}
	}
	list_for_each(p,&head)
	{
		s=list_entry(p,struct stu_st,node);
		printf("%s %d\n",s->name,s->id);
	}
	list_for_each(p,&head)
	{
		s=list_entry(p,struct stu_st,node);
		
	}

	return 0;
}
