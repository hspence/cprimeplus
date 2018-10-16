#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * s_gets(char * st,int n);
char * toLower(char * st);

struct month
{
	char monthname[20];
	char shortname[4];
	int days;
	int monthnum;
};
int main(void)
{	
	struct month years[12]=
 	{
 		{"January","jan",31,1},
 		{"February","feb",28,2},
 		{"March","mar",31,3},
 		{"April","apr",30,4},
		{"May","may",31,5},
		{"June","jun",30,6},
		{"July","jul",31,7},
		{"Auguest","aug",31,8},
		{"September","sep",30,9},
		{"October","oct",31,10},
		{"November","nov",30,11},
		{"December","dec",31,12}
	};
	int days=0,is=0,i;
	char choice[20];
	
	printf("Please enter month of start:\n");
	while(s_gets(choice,20)!=NULL && choice[0] !='\0')
	{
		
		is=0;
		days=0;
		for(i=0;i<12;i++)
		{
			if(!is)
				days +=years[i].days;
			if(strcmp(toLower(years[i].monthname),toLower(choice))==0)
				is=1;
				
		}
		if(is==0)
		{
			printf("Error,please input correct month:\n");
		}
		else
			printf("%d days.\n",days);
	}
	printf("Done.\n");
	
	return 0;
}
char * s_gets(char * st,int n)
{
	char * find;
	char * ret_val;
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
char * toLower(char * st)
{
	char * ret_val;
	ret_val=st;
	while(*st)
	{
		*st=tolower(*st);
		st++;
	}
	
	return ret_val;
}

