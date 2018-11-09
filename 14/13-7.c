#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 30
#define MAXBKS 10
#define LEN 40

int count=0;
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
char get_choice(void);
void print(struct book * ps);
void change(struct book * ps);
void add(struct book * ps);
void del(struct book * ps);
void write_file(struct book * ps,char * st);
char * s_gets(char *st,int n);

int main(void)
{
	
	struct book library[MAXBKS];
	char filename[LEN];
	FILE * fp;
	char ch;
	printf("Please enter the file name:\n");
	s_gets(filename,LEN);
	if((fp=fopen(filename,"a+b"))==NULL)
	{
		fprintf(stderr,"Error in open file %s .\n",filename);
		exit(EXIT_FAILURE);
	}
	while(count<MAXBKS&&fread(&library[count],sizeof(struct book),1,fp)==1)
	{
		count++;
	}
	fclose(fp);
	printf("There are %d books:\n",count);
	print(library);
	
	while((ch=get_choice()) !='q')
	{
		switch (ch)
		{
			case 'a':
				add(library);
				break;
			case 'c':
				change(library);
				break;
			case 'p':
				print(library);
				break;
			case 'd':
				del(library);
				break;
			default:
				printf("Error,try again:\n");
				break;
		}
	}
	printf("Have saved\n");
	write_file(library,filename);
	
	
	return 0;
}

char get_choice(void)
{
	char ch;
	printf("Please enter your choice:\n");
	printf("a.add a book    c.changed a book\n");
	printf("d.delete a book p.print all book\n");
	
	while((ch=getchar())!='a'&&ch!='c'&&ch!='d'&&ch!='p'&&ch!='q')
	{
		while(getchar()!='\n')
			continue;
		printf("Please enter again:\n");
	}
	while(getchar()!='\n')
		continue;
	return ch;
}

void print(struct book * ps)
{
	int i;
	printf("Here is library content:\n");
	for(i=0;i<count;i++)
	{
		printf(" %30s by %20s ($%.2f)\n",ps[i].title,ps[i].author,ps[i].value);
	}
}
void change(struct book * ps)
{
	int i;
	char name[LEN];
	printf("Please enter the title of you want to changed:\n");
	s_gets(name,LEN);
	for(i=0;i<count;i++)
	{
		if(! strcmp(ps[i].title,name))
		{
			printf("Please enter the title of new book:\n");
			s_gets(ps[i].title,LEN);
			printf("Please enter the author of new book:\n");
			s_gets(ps[i].author,LEN);
			printf("Please enter the value of new book:\n");
			scanf("%f",&ps[i].value);
			while(getchar()!='\n')
				continue;
			break;
		}
	}
}
void add(struct book * ps)
{
	
	if(count==MAXBKS)
		printf("Sorry,The library is full\n");
	else
		printf("please enter the tile of new book:\n");
		while(count<MAXBKS&&s_gets(ps[count].title,MAXTITL)!=NULL && ps[count].title[0]!='\0')
		{
			printf("Please enter the author of new book:\n");
		s_gets(ps[count].author,MAXAUTL);
		printf("Please enter the value of new book:\n");
		scanf("%f",&ps[count++].value);
		while(getchar()!='\n')
			continue;
		printf("Now enter the title of next book:(enter empty line to quit\n");
		}
}

void del(struct book * ps)
{
	char name[MAXTITL];
	int i,j;
	if(count==0)
		printf("The library is empty ,too bad ^.^\n");
	else
	{
		printf("Please enter the title of book you want to delete:\n");
		s_gets(name,MAXTITL);
		for(i=0;i<count;i++)
		{
			if(!strcmp(ps[i].title,name))
			{
				for(j=i;j<count;j++)
				{
					strcpy(ps[j].title,ps[j+1].title);
					strcpy(ps[j].author,ps[j+1].author);
					ps[j].value=ps[j+1].value;
				}
			break;
			}
		}
		count--;
		printf("Delete completly\n");
	}
}
	
void write_file(struct book * ps,char * st)
{
	FILE * fp;
	int i=0;
	if((fp=fopen(st,"w+b"))==NULL)
	{
		fprintf(stderr,"Error in open file %s .\n",st);
		exit(EXIT_FAILURE);
	}
	fwrite(ps,sizeof(struct book),count,fp);
	fclose(fp);
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
//ÖÐÎÄ²âÊÔ 








