#include <stdio.h>
#include <string.h>
#define O "His hamlet was funny without being vular"
int main(void){
	printf("he sold the painting for %2.2f.\n",2.345e2);
	printf("%c%c%c\n",'h',105,'\41');
	printf("%s\nhas %d characters.\n",O,strlen(O));
	printf("Is %2.2f the same as %2.2e?\n",1201.0,1201.0);


	return 0;
}
