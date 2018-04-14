#include <stdio.h>
#define limits 5
int main(void){
	int i,list[limits];
	for(i=0;i<limits;i++){
	printf("enter a number\n");
	scanf("%d",&list[i]);
}
	for(i=limits-1;i>=0;i--){
	printf("%d  ",list[i]);
}	

	return 0;
}
