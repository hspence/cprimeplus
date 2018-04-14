#include <stdio.h>
#define X 10
#define B "booboo"
int main(void){
	int age,xp;
	char name[10];
	printf("please enter your first name:\n");
	scanf("%s",name);
	printf("All right,%s,what's your age?\n",name);
	scanf("%d",&age);
	xp=age+X;
	printf("That's a %s 1 you must be at least %d.\n",B,xp);
	return 0;
}
