#include <stdio.h>
int main(void){
	float total,age;
	printf("Please enter your age:");
	scanf("%f",&age);
	total=age*3.156e7;
	printf("your age is equal %.0f sec",total);
	return 0;
}
