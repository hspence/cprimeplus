#include <stdio.h>
int main(void){
	int days,week,w_day;
	printf("please enter number of days:\n");
	scanf("%d",&days);
	while(days>0){
	week=days/7;
	w_day=days%7;
	printf("%d days is equal to %d week %d day\n",days,week,w_day);
	printf("please enter number of days:\n");
	scanf("%d",&days);
}	
	return 0;
}
