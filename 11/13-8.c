#include <stdio.h>
#include <string.h>
#define QUIT "quit"
#define SIZE 40
char * s_gets(char *,int);
char * string_in(char *,char *);

int main(void)
{	
	char string1[SIZE],string2[SIZE];
	char *result;
	printf("please input first string:\n");
	while(strcmp(s_gets(string1,SIZE),QUIT))
	{
		printf("please input second string:\n");
		s_gets(string2,SIZE);
		result = string_in(string1,string2);
		if(result)
		{
			printf("find it!,it is %s\n",result);
		}
		else
			printf("NO FIND !\n");
		printf("please input first string:\n");
		
	}
	printf("ok ! good bye!\n");
	return 0;
}

char * s_gets(char * string,int n)
{
	int i=0;
	if(fgets(string,n,stdin))
	{
	while(string[i] !='\n' && string[i] !='\0')
		i++;
	if(string[i]=='\n')
		string[i]='\0';
	else
		while(getchar()!='\n')
			continue;
	}
	return string;
}

char * string_in(char * string1,char * string2)
{
	int i;
	char * ret_val;
	ret_val=NULL;
	while(*string1)
	{
		i=0;
		while(string1[i]==string2[i])
		{
			i++;
			if(! string2[i])
				return string1;
		}
		string1++;
	
	}
	return NULL;
 }
  



