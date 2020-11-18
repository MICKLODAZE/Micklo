


int llisthead_init(llisthead_st **h,int size)
{
	*h=maloc(sizeof(llisthead_st));
	if(*h==NULL)
		return -1;
	(*h)->size=size;
	(*h)->node.data=NULL;
	(*h)->node.next=(*h)->node.prev=(*h)->node;
	return 0;
}

int _insert(struct llisthead_st *new,struct llisthead_st *prev,struct llisthead_st *next)
{
	new->next=next;
	new->prev=prev;
	prev->next=new;
	next->prev=new;
}

int llisthead_insert(llisthead_st *h,const void *data,int way)
{
	struct node_st *new;
	malloc(sizeof(struct node_st));
	if(new==NULL)
		return -1;
	new->data=malloc(h->size);
	if(new->data==null)
	{
		free(new);
		return -1;
	}
	memcpy(new->data.data,h->size);
	if(way==HEADINSERT)
	{
		_insert(new->data,&h->node,h->node.next);
	}
	else if(way==TAILINSERT)
	{
		_insert(new,h->node.prev,&h->node);
	}
	else
	{
		free(new->data);
		free(new);
		return -1;
	}
}

void llisthead_traval(const listhead_st *h,void (*pr)(const void *))
{
	struct node_st *cur;
}

void llisthead_destroy(llisthead_st *h)
{
}

int llisthead_delete(llisthead_st *h,const void *key,cmp_t cmp)
{
}

void *llisthead_search(llisthead_st *h,const void *key,cmp_t cmp)
{
}

