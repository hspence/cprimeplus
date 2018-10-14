#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81

char * s_gets(char * st,int n);
char showmenu(void);
void Transpose(char * st);
void ToUpper(char * st);
void ToLower(char * st);
void Dummy(char * st);
void eatline(void);
void show(void (*pfun)(char *),char * st);

int main(void)
{
	char str[LEN];
	char copy[LEN];
	char choice;
	void (*pfun)(char *);
	printf("Enter a string (empty line to quit)\n");
	while(s_gets(str,LEN)!=NULL && str[0]!='\0')
	{
		
		while((choice=showmenu())!='n')
		{
			switch (choice)
			{
				case 'u':
					pfun=ToUpper;	break;
				case 'l':
					pfun=ToLower;	break;
				case 'o':
					pfun=Dummy;		break;
				case 't':
					pfun=Transpose;	break;				
			}
			strcpy(copy,str);
			show(pfun,copy);
		}
		puts("Nex line:(empty line to quit)");
	}
	puts("bye.");
	
	return 0;
}

char showmenu(void)
{
	char ans;
	puts("Enter menu choice:");
	puts("u) uppercase		l)lowercase");
	puts("t) transpose		o)original case");
	puts("n) next line");
	ans=getchar();
	eatline();
	while(strchr("ulton",ans)==NULL)
	{
		puts("Please enter a u,l,t,o, or n");
		ans=getchar();
		eatline();
	}
	return ans;
}
void ToUpper(char * st)
{
	while(*st)
	{	
		*st=toupper(*st);
		st++;
	}
}
void ToLower(char * st)
{
	while(*st)
	{
		*st=tolower(*st);
		st++;
	}
}

void Dummy(char * st)
{
	// do nothing
}

void eatline(void)
{
	while(getchar()!='\n')
		continue;
}
void show(void (*pfun)(char *),char * st)
{
	(*pfun)(st);
	puts(st);
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
void Transpose(char * st)
{
	while(*st)
	{
		if(islower(*st))
			*st=toupper(*st);
		else if(isupper(*st))
			*st=tolower(*st);
		st++;
	}
}
















