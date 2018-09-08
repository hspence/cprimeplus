#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit\n"
char * string_re(char * string);

int main(void)
{
	char string[SIZE];
	printf("please input string:\n");

	while(strcmp(fgets(string,SIZE,stdin),QUIT))
	{
		string_re(string);
		printf("The results is %s\n",string);
		printf("please input string:\n");
	}
	printf("ok! good bye!");
	return 0;
}

char * string_re(char * string)
{
	char cache;
	int i,num=strlen(string);
	
	for(i=0;i<=num;i++)
	{
		cache=string[i];
		string[i]=string[num-i-1];
		string[num-i-1]=cache;
	}
	return string;
}
