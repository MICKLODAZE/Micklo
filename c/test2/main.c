#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node_st {
	void *data;
	struct node_st *next;
};

typedef struct {
	struct node_st node;
	int size;
}head_t;

typedef void (*print_t)(const void *data);

int head_init(head_t **h,int size);

int list_insert(head_t *h,const void *data);

void list_traval(const head_t *h,print_t pri);

static void show(const void *data)
{
	const int *d=data;
	printf("%d ",*d);
}

int main(int argc,char *argv[])
{
	head_t *head;
	int n;
	head_init(&head,sizeof(int));
	for(int i=1;i<argc;i++)
	{
		n=atoi(argv[i]);
		list_insert(head,&n);
	}
	list_traval(head,show);	
	printf("\n");

	return 0;
}

int head_init(head_t **h, int size)
{
	*h=malloc(sizeof(head_t));
	if(NULL==*h)
		return -1;
	(*h)->node.data=NULL;
	(*h)->node.next=&(*h)->node;
	(*h)->size=size;

	return 0;
}

int list_insert(head_t *h, const void *data)
{
	struct node_st *new;	
	struct node_st *p;

	new=calloc(1,sizeof(struct node_st));
	if(NULL==new)
		return -1;
	new->data=malloc(h->size);
	if(NULL==new) {
		free(new);
		return -1;
	}
	memcpy(new->data,data,h->size);
	for(p=h->node.next;p->next!=&h->node;p=p->next);
	p->next=new;
	new->next=&h->node;

	return 0;
}

void list_traval(const head_t *h,print_t pri)
{
	struct node_st *p;
	for(p=h->node.next;p!=&h->node;p=p->next)
		pri(p->data);
}

