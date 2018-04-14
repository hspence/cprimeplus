#include <stdio.h>
#include <string.h>
int main(void){
	char first[20],second[20];
	int sizeoff,sizeofs;
	printf("please enter your first name:\n");
	scanf("%s",first);
	printf("second name?\n");
	scanf("%s",second);
	sizeoff=strlen(first);
	sizeofs=strlen(second);
	printf("%*s  %*s\n",sizeoff,first,sizeofs,second);
	printf("%*d  %*d\n",sizeoff,sizeoff,sizeofs,sizeofs);
	
	

	return 0;
}
