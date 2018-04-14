#include <stdio.h>
float fun(float nu1, float nu2);
int main(void){
	float num1,num2;
	printf("please enter two float number:\n");
	scanf("%f %f",&num1,&num2);
	printf("The result is %f\n",fun(num1,num2));
	
	return 0;
}	
float fun(float num1,float num2){
	return (num1-num2)/(num1*num2);
}
