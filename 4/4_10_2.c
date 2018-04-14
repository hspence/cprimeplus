#include <stdio.h>
#include <string.h>

int main(void){
	char name[40];
	float value;
	scanf("%s",name);
	value=strlen(name)*2.0;
	printf("The %s family just may be $%3.2f dollars richer!",name,value);
	
	return 0;
}
