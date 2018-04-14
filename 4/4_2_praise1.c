/*适用不同类型的字符串*/
#include <stdio.h>
#define PRAISE "You are an extraordinary beging."

int main(void){
	char name[40];
	
	printf("what 's your name?");
	scanf("%s",&name);
	printf("Hello,%s,%s\n",name,PRAISE);
	
	return 0;
}
