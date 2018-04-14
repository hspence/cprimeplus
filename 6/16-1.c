#include <stdio.h>
int main(void){
	char list[26];
	int i;
	for(i=0;i<26;i++){
	list[i]='a'+i;
}
	for(i=0;i<26;i++){
	printf("%c",list[i]);
}	
	return 0;
}
