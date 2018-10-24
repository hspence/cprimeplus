#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 20

char * s_gets(char * st,int n);
int get_years(void);
int get_month();
int get_days(int month);
void eatline(void);
char * toLower(char * st);

struct month {
	char monthname[LEN];
	char shortname[LEN];
	int days;
	int daysnumber;
};
struct month years[12]={
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
int main(void)
{
	int days;
	int month;
	int year;
	int i;
	int total=0;
	
	while((year=get_years())>0)
	{
		total=0; 
		month=get_month();
		days=get_days(month);
		for(i=0;i<(month-1);i++)
		{
			total +=years[i].days;
		}
		total +=days;
		printf("%d years up to %s %d th total have %d days\n",year,years[month-1].monthname,days,total);
		printf("Next years:\n");
		
	}
	printf("Bye.\n");
	
	return 0;
}
int get_years(void)
{
	int ret;
	printf("Please enter year:\n");
	while(scanf("%d",&ret)==0||ret<0)
	{
		eatline();
		printf("Error,please enter year again:\n");
	}
	if(ret%400==0||(ret%4==0&&ret%100!=0))
		years[1].days=29;
	else
		years[1].days=28;
	
	return ret;
}
int get_month()
{
	int ret=0;
	int i;
	char choice[LEN];
	int string_error=1,number_error=1;
	
	while(string_error&&number_error)
	{
		printf("Please enter a month:(number or month name)");

		if(scanf("%d",&ret)==1)
		{
			number_error=0;
			eatline();
		}
		else if(s_gets(choice,LEN)!=NULL)
		{
			for(i=0;i<12;i++)
			{
				if(!strcmp(toLower(choice),toLower(years[i].monthname)))
				{
					string_error=0;
					ret=i+1;
					break;
				}
				else if(!strcmp(toLower(choice),toLower(years[i].shortname)))
				{
					string_error=0;
					ret=i+1;
					break;
				}
			}
		}
		if(string_error&&number_error)
		{
			printf("Input error!,try again\n");
		}	
	}
	return ret;
}

int get_days(int month)
{
	int day;
	printf("Enter the day:\n");
	while(scanf("%d",&day)!=1||(day<=0||day>years[month-1].days))
	{
		eatline();
		printf("Error,try enter the day ");
	}
	eatline();
	return day;
}
void eatline(void)
{
	while(getchar()!='\n')
		continue;
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







