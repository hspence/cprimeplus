#include <stdio.h>
int main(void){
	double list1[8],list2[8],sum=0;
	int i;
	for(i=0;i<8;i++){
	printf("enter a double float:\n");
	scanf("%lf",&list1[i]);
	list2[i]=list1[i]+sum;
	sum += list1[i];
}
	for(i=0;i<8;i++){
	printf("%0.2lf  ",list1[i]);
} 	printf("\n");
	for(i=0;i<8;i++){
	printf("%0.2lf  ",list2[i]);
	}	
	
	return 0;
}
