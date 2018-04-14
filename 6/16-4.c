#include <stdio.h>
int main(void){
	int i,j,k=0;
	for(i=0;i<6;i++){
		for(j=0;j<=i;j++){
		printf("%c",'A'+k);
		k++;
		}
	printf("\n");
}	
	return 0;
}
