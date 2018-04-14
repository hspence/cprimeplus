#include <stdio.h>
int main(void){
	int n=1,sum=5;
	while(sum<150){
	sum=(sum-n)*2;
	printf("in %d week ,doctor has %d friends\n",n,sum);
	n++;
}
		
	return 0;
}
