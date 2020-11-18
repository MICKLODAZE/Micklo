#include <stdio.h>

int *add_score(int *arr, int *nmemb, int score);
int *delete_score(int *arr, int *nmemb, int id);
int update_score(int *arr, int nmemb, int oldscore, int newscore);
int sort_score(int *arr, int nmemb);
int search_score(int *arr, int nmemb, int key);

int main ()
{
	int select;
	int *arr=NULL
	int n=sizeof(arr)/sizeof(int);
	int score;
	int memb=0;
	
	printf("请选择:1.增加成绩 2.删除成绩 3.查找成绩 4.替换成绩 5.退出");
	scanf("%d",&select);
	
	while(1)
	{
		if(select==QUIT)
			break;
		switch (select)
		{
			case ADD:
				printf("请输入要添加的成绩:");
				scanf("%d",&score);
				a=add_score(arr,&memb,score);
				break;
			case DEL:
				printf("请输入要删除的成绩:");
				scanf("%d",&score);
				delete_score(arr,&memb,score)
				break;
			case SEARCH:
			
				break;
			case SWAP:
				break;
			case QUIT:
				break;
		}
	}
	
	#if 0
	// 向学生管理系统arr中增加新元素score
	if(select==1)
	{
		printf("请输入学生成绩");
	}
	// 删除指定元素id
	else if(select==2)
	{
	}
	// 将arr管理系统中第一次出现oldscore改为newscore
	else if(select==3)
	{
	}
	// 排序 升序
	else if(select==4)
	{
		sort_score(arr,n);
		for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	// 查找  返回值是位置
	else if(select==5)
	{
		int score;
		printf("请输入你想查找的分数:");
		scanf("%d",&score);
		printf("%d\n",search_score(arr,n,score));
	}
	#endif

	return 0;
}

int *add_score(int *arr, int *nmemb, int score)
{
	arr = realloc(arr, (*nmemb+1)*sizeof(int));	
	if (NULL == arr)
		return NULL;
	arr[*nmemb] = score;
	(*nmemb) ++;

	return arr;
}

int *delete_score(int *arr, int *nmemb, int id)
{
	int i;
	for ( i = 0; i < *nmemb; i++) {
		if (arr[i] == del)
			break;
	}
	if (i == *nmemb)
		return arr;
	for (; i < *nmemb-1; i++) {
		arr[i] = arr[i+1];
	}
	(*nmemb) --;
	arr = realloc(arr, *nmemb*sizeof(int));

	return arr;
}

int update_score(int *arr, int nmemb, int oldscore, int newscore)
{

}

int sort_score(int *arr, int nmemb)
{
	int p;
	for(int i=0;i<nmemb;i++)
	{
		for(int j=i+1;j<nmemb;j++)
		{
			if(arr[i]<arr[j])
			{
				p=arr[j];
				arr[j]=arr[i];
				arr[i]=p;
			}
		}
	}
}

int search_score(int *arr, int nmemb, int key)
{
	for(int i=0;i<nmemb;i++)
	{
		if(key==arr[i])
		{
			return i+1;
		}
	}
}
