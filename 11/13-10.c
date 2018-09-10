#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit\n"
void delete_space( char *);

int main(void)
{
	char string[SIZE];
	printf("please input string:\n");
	while(strcmp(fgets(string,SIZE,stdin),QUIT))
	{
		delete_space(string);
		printf("The result is %s \n",string);
		printf("please input string:\n");
	}
	printf("OK,goodbye!");
	
	return 0;
}

void delete_space(char * st)
{
	int i;
	while(*st)
	{
		if(*st==' ')
			for(i=0;st[i] != '\0';i++)
				st[i]=st[i+1];
		else
			st++;
	}
	printf("Delete Done ! \n");
}
