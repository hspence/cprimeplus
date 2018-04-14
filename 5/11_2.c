#include <stdio.h>
int main(void){
	int num;
	printf("please enter a number:\n");
	scanf("%d",&num);
	int n=num+11;
	while(num<n){
	printf("%d	",num++);
	}
	return 0;

}
