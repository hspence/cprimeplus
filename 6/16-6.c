#include <stdio.h>
int main(void){
	int uplimits,downlimits,i,up;
	printf("please enter down smallest limits and biggest limits:\n");
	scanf("%d %d",&downlimits,&uplimits);
	up=downlimits;
	printf("number   pow   sqrt\n");
	for(i=0;i<=(uplimits-downlimits);i++){
	printf("%d       %d    %d\n",up,up*up,up*up*up); 
	up ++;
}

	return 0;
}
