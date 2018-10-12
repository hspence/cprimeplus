#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NLEN 30

struct namect {
	char * fname;
	char * lname;
	int letters;
};
void getinfo(struct namect * pst);
void makeinfo(struct namect * pst);
void showinfo(struct namect * pst);
void cleanup(struct namect * pst);
char * s_gets(char * st,int n);

int main(void)
{
	struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);
	
	return 0;
}
void getinfo(struct namect * pst)
{
	char temp[NLEN];
	printf("please enter your first name:\n");
	s_gets(temp,NLEN);
	pst->fname=(char *) malloc(strlen(temp)+1);
	strcpy(pst->fname,temp);
	
	printf("please enter your last name:\n");
	s_gets(temp,NLEN);
	pst->lname=(char *) malloc(strlen(temp)+1);
	strcpy(pst->lname,temp);
}
void makeinfo(struct namect * pst)
{
	
	pst->letters=strlen(pst->fname)+strlen(pst->lname);
}
void showinfo(struct namect * pst)
{
	printf("%s , %s ,your name has %d letters\n",pst->fname,pst->lname,pst->letters);
}
void cleanup(struct namect * pst)
{
	free(pst->fname);
	free(pst->lname);
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






















