#include <stdio.h>
int main(void){
	int l1,l2,i,sum=0;
	printf("enter a lower and upper integer limits:\n");
	while((scanf("%d %d",&l1,&l2))&&l2>l1){
	for(i=l1,sum=0;i<=l2;i++){
	sum=sum+i*i;
}
	printf("The sums of the squares from %d to %d is %d\n",l1,l2,sum);
	printf("enter next set of the limits:\n");
}
	return 0;
}
