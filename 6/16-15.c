#include <stdio.h>
#include <string.h>
	
int main(void){
	char str[255],ch=1;
	int n,i=0;
	printf("enter some sentence:\n");
	while(ch != '\n'){
	scanf("%c",&ch);	
	str[i++]=ch;
	
}
	
	for(n=i-1;n>=0;n--) printf("%c",str[n]);
	
	return 0;
	}
