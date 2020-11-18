#ifndef	_LLIST_H_
#define _LLIST_H_

typedef struct {
	struct node_st node;
	int size;
}llisthead_st;

struct node_st{
	struct llisthead_st *prev;
	struct llisthead_st *next;
	void *data;
};

typedef (*cmp_t)(const void *data,const void *key);

int llisthead_init(llisthead_st **h,int size);

int llisthead_insert(llisthead_st *h,const void *data,int way);

void llisthead_traval(const listhead_st *h,void (*pr)(const void *));

void llisthead_destroy(llisthead_st *h);

int llisthead_delete(llisthead_st *h,const void *key,cmp_t cmp);

void *llisthead_search(llisthead_st *h,const void *key,cmp_t cmp);

#endif
