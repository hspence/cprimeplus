#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 40
#define SIZE 12

struct seat {
	int num;
	int isAssign;
	char first[LEN];
	char last[LEN];
};

void read_file(struct seat * ps,char *filename);
void init_val(struct seat * ps);
char get_choice(void);
void show_empty_number(struct seat * ps);
void show_empty_list(struct seat * ps);
void show_alpha(struct seat * ps);
void assign_seat(struct seat * ps);
void delete_seat(struct seat * ps);
void write_file(struct seat * ps,char * filename);
char * s_gets(char * st,int n);

int main(void)
{
	FILE * fp;
	char filename[LEN];
	char ch;
	int count=0;
	
	
	struct seat plane[SIZE];
	init_val(plane);
	
	printf("Please enter file name:\n");
	s_gets(filename,LEN);
	read_file(plane,filename);
	
	while((ch=get_choice())!='q')
	{
		switch (ch)
		{
			case 'a':
				show_empty_number(plane);
				break;
			case 'b':
				show_empty_list(plane);
				break;
			case 'c':
				show_alpha(plane);
				break;
			case 'd':
				assign_seat(plane);
				break;
			case 'e':
				delete_seat(plane);
				break;
			default:
				printf("Error,try again:\n");
				break;
		}
	}
	write_file(plane,filename);
	
	return 0;
}

void read_file(struct seat * ps,char * filename)
{
	FILE * fp;
	
	if((fp=fopen(filename,"a+b"))==NULL)
	{
		fprintf(stderr,"Error in open file:%s",filename);
		exit(EXIT_FAILURE);
	}
	fread(ps,sizeof(struct seat),SIZE,fp);
	printf("The file content have input\n");
	
	fclose(fp);
}

void init_val(struct seat * ps)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		ps[i].num=i+1;
		ps[i].isAssign=0;
		strcpy(ps[i].first,"");
		strcpy(ps[i].last,"");
	}
}

char get_choice(void)
{
	char ch;
	printf("To choose a function, enter its letter label:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) Delete a seat assignment\n");
	printf("q) Quit\n");
	while((ch=getchar())!='a'&&ch!='b'&&ch!='c'&&ch!='d'&&ch!='e'&&ch!='q')
	{
		while(getchar()!='\n')
			continue;
		printf("Error,try again.\n");
	}
	while(getchar()!='\n')
		continue;
	return ch;
}
void show_empty_number(struct seat * ps)
{
	int i,count=0;
	for(i=0;i<SIZE;i++)
	{
		if(!ps[i].isAssign)
			count++;
	}
	printf("The plane have %d empty seats\n",count);
}
void show_empty_list(struct seat * ps)
{
	int i;
	printf("The plane 's empty seats:\n");
	for(i=0;i<SIZE;i++)
	{
		if(!ps[i].isAssign)
			printf("%2d ",i+1);
		if((i+1)%4==0)
			putchar('\n');
	}
}
void show_alpha(struct seat * ps)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%2d :%15s %15s\n",ps[i].num,ps[i].first,ps[i].last);
	}
}
void assign_seat(struct seat * ps)
{
	int num;
	printf("Please enter the seat's number you want to assign\n" );
	while(scanf("%d",&num)&&ps[num-1].isAssign)
	{
		while(getchar()!='\n')
			continue;
		printf("This seat is can't assign,try enter other seat:\n");
	}
	while(getchar()!='\n')
		continue;
	printf("Please enter your first name:\n");
	s_gets(ps[num-1].first,LEN);
	printf("Please enter your last name:\n");
	s_gets(ps[num-1].last,LEN);
	printf("Assign success\n");
	ps[num-1].isAssign=1;
}
void delete_seat(struct seat * ps)
{
	int num;
	
	printf("please enter the seat's number want to delete:\n");
	scanf("%d",&num);
	while(getchar()!='\n')
		continue;
	ps[num-1].isAssign=0;
	strcpy(ps[num-1].first,"");
	strcpy(ps[num-1].last,"");
	printf("Have deleted\n");
}
void write_file(struct seat * ps,char * filename)
{
	FILE * fp;
	if((fp=fopen(filename,"w+b"))==NULL)
	{
		fprintf(stderr,"Error in open file %s",filename);
		exit(EXIT_FAILURE);
	}
	fwrite(ps,sizeof(struct seat),SIZE,fp);
	fclose(fp);
	
	printf("Have write to file.\n");
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

