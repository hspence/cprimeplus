#include <stdio.h>
#include <string.h>

int main(void){
	int i,n;
	char str[20];
	printf("please enter a word:\n");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++){
	printf("%c",str[n-1-i]);
	}
	printf("\n");

return 0;
}
