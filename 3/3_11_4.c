#include <stdio.h>
int main(void){
	float enter,fixpoint,expond;
	printf("Enter a floating-point value:");
	scanf("%f",&enter);
	printf("fixed-point notation:%.6f\n",enter);
	printf("exponential notation:%.6e:\n",enter);
	printf("p notation:%a\n",enter);
	
	return 0;
}
