#include <stdio.h>
#include <stdlib.h>

extern int rand1();
extern int srand1(unsigned int seed);
int main(void)
{
	int count;
	unsigned int seed;
	
	printf("Please enter your choice for seed.\n");
	while(scanf("%d",&seed)==1)
	{
		srand1(seed);
		for(count=0;count<5;count++)
		{
			printf("%d\n",rand1());
		}
		printf("please enter next seed (q to quit):\n");
		
	}
	return 0;
}
