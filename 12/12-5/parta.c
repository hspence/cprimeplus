#include <stdio.h>
void report_count();
void accumulate(int k);

int count=0;

int main(void)
{
	register int i;
	int value;
	printf("Enter a positive integer (0 to quit):\n");
	while(scanf("%d",&value)==1 &&value>0)
	{
		count++;
		for(i=value;i>=0;i--)
			accumulate(i);
		printf("Enter a postive integer (0 to quit):");
	}
	report_count();
	return 0;
}
void report_count(int k)
{
	printf("Loop excuted %d times\n",count); 
}
