#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 40
#define LIM 5

void print_sour(char *[]);
void print_upper(char *[]);
void print_lower(char *[]);

int main(int argc,char * argv[])
{
	char string[LIM][SIZE];
	char * ptr[LIM];
	int i=0;
	printf("please input %d lines string:\n",LIM);
	while(i<LIM && fgets(string[i],SIZE,stdin)!=NULL)
	{	
		ptr[i]=string[i];
		i++;
	}
	if(argc<2||!strcmp(argv[1],"-p"))
		print_sour(ptr);
	else if(!strcmp(argv[1],"-u"))
		print_upper(ptr);
	else if(!strcmp(argv[1],"-l"))
		print_lower(ptr);
	printf("end\n");
	
	return 0;
}
void print_sour(char * string[SIZE])
{
	int i=0;
	for(i=0;i<LIM;i++)
	{
		printf("%s",string[i]);
	}
}
void print_upper(char * string[SIZE])
{
	int i=0,j=0;
	for(i=0;i<LIM;i++)
	{
		for(j=0;j<strlen(string[i])-1;j++)
		{
			string[i][j]=toupper(string[i][j]);
		}
	}
	print_sour(string);
}
void print_lower(char * string[SIZE])
{
	int i=0,j=0;
	for(i=0;i<LIM;i++)
	{
		for(j=0;j<strlen(string[i])-1;j++)
		{
			string[i][j]=tolower(string[i][j]);
		}
	}
	print_sour(string);
}









