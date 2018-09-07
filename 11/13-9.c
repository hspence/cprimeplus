#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit\n"
char * string_re(char *);

int main(void)
{
	char string[SIZE];
	printf("please input string:\n");

	while(strcmp(fgets(string,SIZE,stdin),QUIT))
	{
		
		printf("The results is %s\n",string_re(string));
		printf("please input string:\n");
	}
	printf("ok! good bye!");
	return 0;
}

char * string_re(char * string)
{
	char result[SIZE];
	int i;
	int j=0;
	for(i=(strlen(string)-2);i>=0;i--)
	{
		result[j++]=string[i];
	}
	return result;
}
