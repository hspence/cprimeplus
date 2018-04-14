#include <stdio.h>
int main(void){
	float enter;
	printf("Please enter your high(in inch):");
	scanf("%f",&enter);
	printf("Your high in centermeter is %.2f cm\n",enter*2.54f);
	
	return 0;
}
