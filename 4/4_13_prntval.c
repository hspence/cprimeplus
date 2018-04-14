#include <stdio.h>
int main(void){
	int bph20=212;
	int rv;
	
	rv=printf("%d F is water's boilling point.\n",bph20);
	printf("The printf() function printed %d characters.\n",rv);
	
	return 0;
}
