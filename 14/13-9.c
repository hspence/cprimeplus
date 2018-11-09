#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 40
#define SIZE 12
#define MAXFL 5

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
char get_flight(void);
char * s_gets(char * st,int n);
void confirm_assign(void);

int isconfirm=0;
char flight_num[MAXFL];

int main(void)
{
	FILE * fp;
	char filename[LEN];
	char ch,flight;
	int count=0;
	
	
	struct seat plane[SIZE];
	
	
	//printf("Please enter file name:\n");
	//s_gets(filename,LEN);
	//read_file(plane,filename);
	while((flight=get_flight())!='q')
	{
		isconfirm=0;
		init_val(plane);
		strcpy(filename,flight_num);
		strcat(filename,".txt");
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
				case 'f':
					confirm_assign();
					break;
				default:
					printf("Error,try again:\n");
					break;
			}
			if(isconfirm)
				write_file(plane,filename);
		}
	}
		
	
	
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
	puts("-------------");
	printf("Now it's %s flight\n",flight_num);
	printf("To choose a function, enter its letter label:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) Delete a seat assignment\n");
	printf("f) Confirmed seats assignment\n");
	printf("q) Quit\n");
	while((ch=getchar())!='a'&&ch!='b'&&ch!='c'&&ch!='d'&&ch!='e'&&ch!='f'&&ch!='q')
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

char get_flight(void)
{
	char ret_val;
	puts("--------------------------------");
	printf("Please choose a flight :\n");
	puts("a) 102  b) 311");
	puts("c) 444  d) 519");
	puts("q) quit");
	while((ret_val=getchar())!='a'&&ret_val!='b'&&ret_val!='c'&&ret_val!='d'&&ret_val!='q')
	{
		while(getchar()!='\n')
			continue;
		printf("Input error ,try again!\n");
	}
	while(getchar()!='\n')
		continue;
	if(ret_val=='a')
		strcpy(flight_num,"102");
	else if(ret_val=='b')
		strcpy(flight_num,"311");
	else if(ret_val=='c')
		strcpy(flight_num,"444");
	else if(ret_val=='d')
		strcpy(flight_num,"519");
	return ret_val;
}

void confirm_assign(void)
{
	isconfirm=1;
	printf("The seats is confirmed\n");
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

