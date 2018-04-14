#include <stdio.h>
int main(void){
	float speed,size,time;
	printf("speed:\n");
	scanf("%f",&speed);
	printf("size:\n");
	scanf("%f",&size);
	time=size/(speed/8);
	printf("At %.2f megabites per second,a file of %.2f megabytes\ndownload in %.2f seconds\n",speed,size,time);
	return 0;
}
