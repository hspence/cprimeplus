#include <stdio.h>

int main(void)
{
	int i;
	enum choice {no=0,yes=1,maybe=2};
	for(i=no;i<=maybe;i++)
		printf("%d\n",i);
	printf("Hello,world!\n");
	
	return 0;
}

