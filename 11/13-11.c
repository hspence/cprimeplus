#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 10
char getchoice(void);
void print_sour(char * [],int);
void print_ascii(char * [],int);
void print_length(char * [],int);
void print_first_word(char * [],int);
int first_word(char *);

char * s_gets(char *,int);

int main(void)
{
	int i=0;
	char choice;
	char  string[LIM][SIZE];
	char * ptr[LIM]; 
	printf("Please input %d line string:\n",LIM);
	while(i<LIM && s_gets(string[i] ,SIZE))
	{
		ptr[i]=string[i];
		i++;
		
	 } 
	printf("%d lines string had input\n",i);
	while((choice=getchoice())!='q')
	{
		switch(choice)
		{
			case 'a':
				print_sour(ptr,i);
				break;
			case 'b':
				print_ascii(ptr,i);
				break;
			case 'c':
				print_length(ptr,i);
				break;
			case 'd':
				print_first_word(ptr,i);
				break;
			default:
				printf("Eorro! \n");
				break;
		}
		
	}
	printf("The program is end\n");
	
	return 0;
}
char getchoice(void)
{
	char choice;
	printf("Please input a,b,c,d or 'q' to make your choice\n");
	printf(" a.print the source string    b.print in order of ASCII.\n");
	printf(" c.print  in order of length  d.print in order of first word 's length.\n");
	printf(" q.quit\n");
	choice=getchar();
	while(getchar() != '\n')
		continue;
	return choice;
	 
}
void print_sour(char * string[10],int num)
{
	int i=0;
	for(i=0;i<num;i++)
	{
		puts(string[i]);
	}
	printf("printf end!\n");
}

void print_ascii(char * string[],int num)
{
	char * temp;
	int i,j;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{	
				temp=string[j];
				string[j]=string[i];
				string[i]=temp;
			}
		}	
	}
	for(i=0;i<num;i++)
		puts(string[i]);
}

void print_length(char * string[],int num)
{
	char * temp;
	int i,j;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strlen(string[i])>strlen(string[j]))
			{
			temp=string[j];
			string[j]=string[i];
			string[i]=temp;
			}
		}
	}
	print_sour(string,num);
}

void print_first_word(char * string[],int num)
{
	char * temp;
	int i,j;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(first_word(string[i])>first_word(string[j]))
			{
				temp=string[j];
				string[j]=string[i];
				string[i]=temp;	
			}  
		}
	}
	for(i=0;i<num;i++)
		puts(string[i]);
	
}
int first_word(char * string)
{
	int count=0,i=0;
	while(!isalpha(string[i]))
		i++;
	while(isalpha(string[i]))
	{
		i++;
		count++;
	}
	return count;
}






char * s_gets(char * string,int size)
{
	char * ret_val;
	ret_val=string;
	fgets(string,size,stdin);
	while(*string!='\0'&& *string != '\n')
	{
		string++;
		}	
		
	if(*string=='\n')
		*string='\0';
	else
		while(getchar()!='\n')
			continue;
	return ret_val;
}



