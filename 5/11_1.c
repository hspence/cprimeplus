#include <stdio.h>
#define TO 60
int main(void){
	int min,hour,h_min;
	printf("please enter a time in minutes:\n");
	scanf("%d",&min);
	while(min>=0){
	hour=min/TO;
	h_min=min%TO;
	printf("The time is %d h %d min\n",hour,h_min);
	printf("please enter a time in minutes\n");
	scanf("%d",&min);
	} 
	
	return 0;
}
