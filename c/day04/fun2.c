#include <stdio.h>

#define CHARACTOR(m,n) m##n

#define SWAP(m,n) \
	do \
	{ \
		typeof(m) t; \
		t=m; \
		m=n; \
		n=t; \
	} while(0)

int main (void)
{
	int m=10,n=5;
	SWAP(m,n);
	int i=CHARACTOR(100,123);
	printf("m=%d,n=%d\n",m,n);
	printf("%d",i);
	return 0;
}
