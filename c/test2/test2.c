#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	struct node_st node;
	int size;
}re_oder;

struct node_st {
	void *data;
	struct node_st	*next;
};

typedef void (*printf_t)(const void *data);



