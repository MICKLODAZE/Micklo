#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
}data_t;

struct node_st{
	data_t data;
	struct node_st *left;
	struct node_st *right;
};

int tree_insert(struct node_st **root,const data_t *d)
{
	struct node_st *new=NULL;
	if(*root==NULL)
	{
		new=malloc(sizeof(*new));
		if(new==NULL)
			return -1;
		memcpy(&new->data,d,sizeof(data_t));
		new->left=new->right=NULL;
		*root=new;
		return 0;
	}
	if((*root)->data.id>=d->id)
		return tree_insert(&(*root)->left,d);
	else
		return tree_insert(&(*root)->right,d);

}

//中序
#if 1
void tree_mid_traval(const struct node_st *root)
{
	if(root==NULL)
		return;
	tree_mid_traval(root->left);
	printf("%d\n",root->data.id);
	tree_mid_traval(root->right);
}
#endif

//先序
#if 0
void tree_mid_traval(const struct node_st *root)
{
	if(root==NULL)
		return;
	printf("%d\n",root->data.id);
	tree_mid_traval(root->left);
	tree_mid_traval(root->right);
}
#endif

//后序
#if 0
void tree_mid_traval(const struct node_st *root)
{
	if(root==NULL)
		return;
	tree_mid_traval(root->left);
	tree_mid_traval(root->right);
	printf("%d\n",root->data.id);
}
#endif

void tree_destroy(struct node_st **root)
{
	if(*root==NULL)
		return;
	tree_destroy(&(*root)->left);
	tree_destroy(&(*root)->right);
	printf("%d将会被销毁\n",(*root)->data.id);
	free(*root);
	*root==NULL;
}

void tree_show(const struct node_st *root,int level)
{
	if(root==NULL)
		return;
	tree_show(root->left,level+1);
	for(int i=0;i<level;i++)
	{
		printf("    ");
	}
	printf("%d\n",root->data.id);
	tree_show(root->right,level+1);
}

static struct node_st **__find(struct node_st **root,int id)
{
	if(*root==NULL)
		return NULL;
	if((*root)->data.id==id)
		return root;
	if((*root)->data.id<id)
		__find(&(*root)->right,id);
	else
		__find(&(*root)->left,id);
}

static struct node_st *maxNode(struct node_st *root)
{
	if(root->right==NULL)
		return root;
	maxNode(root->right);
}

static struct node_st *minNode(struct node_st *root)
{
	if(root->left==NULL)
		return root;
	minNode(root->left);
}

static void __delete(struct node_st **root)
{
	struct node_st *l,*r,*cur;
	l=(*root)->left;
	r=(*root)->right;
	cur=*root;
	if(l!=NULL)
	{
		*root=l;
		maxNode(l)->right=r;
	}
	else
	{
		*root=r;
	}
	cur->right=cur->left=NULL;
	free(cur);
}

int tree_delete(struct node_st **root,int id)
{
	struct node_st **f;
	f=__find(root,id);
	if(NULL==f)
		return -1;
	__delete(f);
	return 0;
}

static int treenodes(const struct node_st *root)
{
	if(root==NULL)
		return 0;
	return treenodes(root->left)+treenodes(root->right)+1;
}

static void turn_left(struct node_st **root)
{
	struct node_st *cur,*r;
	cur=*root;
	r=cur->right;
	*root=r;
	cur->right=NULL;
	minNode(r)->right=cur;
	tree_show(tree,0);
	getchar();
}

static void turn_right(struct node_st **root)
{
	struct node_st *cur,*l;
	cur=*root;
	l=cur->left;
	*root=l;
	cur->left=NULL;
	minNode(l)->left=cur;
	tree_show(tree,0);
	getchar();
}

int main (int argc,char *argv[])
{
	struct node_st *tree=NULL;
	data_t dt;
	if(argc<2)
		return 1;
	for(int i=0;argv[1][i];i++)
	{
		dt.id=argv[1][i]-'0';
		tree_insert(&tree,&dt);
	}
	tree_show(tree,0);
	//tree_mid_traval(tree);
	printf("**********delete**********\n");
	tree_delete(&tree,3);
	tree_show(tree,0);
	tree_destroy(&tree);
	return 0;
}
