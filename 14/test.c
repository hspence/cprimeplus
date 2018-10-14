#include <stdio.h>
void str1(void (*pf)(void));
void pr(void);

int main(void)
{
	str1(pr);
	
	return 0;
}

void pr(void)
{
	printf("prprprprprpr...\n");
}
void str1(void (*pf)(void))
{
	puts("Now in str1 function..");
	pf();
	puts("still in function str1..");
	
}
