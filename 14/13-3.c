#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	double value;

};
char * s_gets(char * st,int n);
void printf_sort(struct book list[],int n);
void printf_title(struct book list[],int n);
void printf_value(struct book list[],int n);


int main(void)
{
	struct book library[MAXBKS];
	int i=0;
	printf("Please enter the book title (enter empty line to quit):\n");
	
	while(i<MAXBKS&&s_gets(library[i].title,MAXTITL)!=NULL&&library[i].title[0]!='\0')
	{
		printf("Please enter the author:\n");
		s_gets(library[i].author,MAXAUTL);
		printf("Enter the value:\n");
		scanf("%lf",&library[i++].value);
		while(getchar()!='\n')
			continue;
		if(i<MAXBKS)
			printf("Please enter next book:(enter empty line to quit)\n"); 
	}
	if(i==0)
		printf("No book? too bad.\n");
	else
		printf("Now ,Here is the list of your books:\n");
		printf("print it by source sorted:\n");
		printf_sort(library,i);
		printf("------------\n");
		printf("print it by title:\n");
		printf_title(library,i);
		printf("------------\n");
		printf("print it by value:\n");
		printf_value(library,i);
		printf("------------\n");
		printf("print Done.\n");
	
	return 0;
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
		{
			*find='\0';
		}
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}

void printf_sort(struct book list[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %s by %s ($%.2f)\n",list[i].title,list[i].author,list[i].value);
	}
}

void printf_title(struct book list[],int n)
{
	int i,j;
	struct book temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(strcmp(list[i].title,list[j+1].title)>0)
			{
				temp=list[i];
				list[i]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
	printf_sort(list,n);
}

void printf_value(struct book list[],int n)
{
	int i,j;
	struct book temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-1;j++)
		{
			if(list[i].value>list[j+1].value)
			{
				temp=list[i];
				list[i]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
	printf_sort(list,n);
}


