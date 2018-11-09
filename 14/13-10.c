#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 40

char * ToUpper(char * st);
char * ToLower(char * st);
char * Transpos(char * st);
char * Dummy(char * st);
char get_choice(void);
char * s_gets(char * st,int n);
int main(void)
{
	char ch;
	char string[LEN];
	printf("Please enter a string:\n");
	s_gets(string,LEN);
	char * (* pt[4])(char *)={ToUpper,ToLower,Transpos,Dummy};
	
	while((ch=get_choice())!='q')
	{
		switch(ch)
		{
			case 'a':
				puts(pt[0](string));
				break;
			case 'b':
				puts(pt[1](string));
				break;
			case 'c':
				puts(pt[2](string));
				break;
			case 'd':
				puts(pt[3](string));
			default:
				printf("Error ,try again\n");
		}
	}
	
	return 0;
}
char get_choice(void)
{
	char ret;
	puts("Please choose :");
	puts("a) to upper b) to lower");
	puts("c) transpos d) print dummy");
	puts("q) quit.");
	
	while((ret=getchar())!='a'&&ret!='b'&&ret!='c'&&ret!='d'&&ret!='q')
	{
		while(getchar()!='\n')
			continue;
		puts("Error,try again.");
	}
	while(getchar()!='\n')
		continue;
	return ret;
}
char * ToUpper(char * st)
{
	char * ret;
	ret=st;
	while(*st)
	{
		*st=toupper(*st);
		st++;
	}
	return ret;
}
char * ToLower(char * st)
{
	char * ret;
	ret=st;
	while(*st)
	{
		*st=tolower(*st);
		st++;
	}
	return ret;
}
char * Transpos(char * st)
{
	char * ret;
	ret=st;
	while(*st)
	{
		if(islower(*st))
			*st=toupper(*st);
		else if(isupper(*st))
			*st=tolower(*st);
		st++;
	}
	return ret;
}
char * Dummy(char * st)
{
	return st;
}
char * s_gets(char * st,int n)
{
	char * ret_val;
	char * find;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}




