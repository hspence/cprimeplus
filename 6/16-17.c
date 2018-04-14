#include <stdio.h>
int main(void){
	
	float sum=1000000;
	int i=0;
	while(sum>0){
	sum=sum*1.08;
	sum -= 100000;
	i++;
}
	printf("%d years will takes off moneys\n",i);
	
	return 0;
}
