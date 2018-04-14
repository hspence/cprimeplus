#include <stdio.h>
int main(void){
	float num1,num2;
	printf("please enter two float number:\n");
	scanf("%f %f",&num1,&num2);
	printf("The result is %f\n",(num1-num2)/(num1*num2));
	
	return 0;
}	
