#include <stdio.h>
#include <math.h>
int main(void){
	int list[8],i;
	for(i=0;i<8;i++){
	list[i]=pow(2,i+1);
	}
	i=0;
	do{
	printf("%d\n",list[i]);
	i++;
	}while(i<8);

	return 0;
}
