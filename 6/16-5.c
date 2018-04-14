#include <stdio.h>
int main(void){
	int i,j,k,l,m;
	char en;
	printf("please enter a letter");
	scanf("%c",&en);
	k=2*(en-'A'+1)+1;
	for(i=0;i<(k/2);i++){

		for(j=0;j<((k/2)-i-1);j++){
		 printf(" ");}

		for(l=0;l<=i;l++) {
		printf("%c",'A'+l);}	

		for(m=0;m<=i-1;m++){
	 printf("%c",'A'+(l-2-m));}

	printf("\n");
}
	return 0;
	}
