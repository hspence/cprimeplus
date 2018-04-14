#include <stdio.h>
#include <stdbool.h>

int main(void){

	int num,div;
	bool isprime;
	printf("enter a number  to analysis:\n");
	printf("enter q to quit\n");
	while(scanf("%d",&num)){
	isprime=true;
	for(div=2;div*div<num;div++){
	if(num%div==0){
	isprime=false;
	if(div*div==num) printf("The %d is divisible by %d .\n",num,div);
	else 
		printf("The %d is divisible by %d and %d .\n",num,div,num/div);}


}
	if(isprime) printf("The number is prime.\n");
	printf("please enter another number to analysis:\n");
	}
	return 0;
}
