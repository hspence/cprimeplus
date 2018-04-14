#include <stdio.h>
int main(void){
	float height;
	char name[20];
	printf("please enter your name:\n");
	scanf("%s",name);
	printf("Please enter your height : (cm)\n");
	scanf("%f",&height);
	height=height/100;
	printf("%s,your are %.3f m tall\n",name,height);
	//************/	

	return 0;
}
