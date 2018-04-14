#include <stdio.h>
int main(void){
	
	float mon1=100,mon2=100;
	int i=0;
	while(mon1>=mon2){
	mon1=mon1+100*0.1;
	mon2=mon2*1.05;
	i++;
}
	printf("%d years\n",i);
	printf("and Daphne is %f dollors,Deirdrc is %f dollors\n",mon1,mon2);
	
	return 0;

}
