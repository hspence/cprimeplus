#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 20

char * s_gets(char * st,int n);
int get_years(void);
int get_month();
int get_days(char *st);
void eatline(void);

struct month {
	char monthname[LEN];
	char shortname[LEN];
	int days;
	int daysnumber;
};
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
int main(void)
{
	int days;
	int month;
	int years;
	
	while((years=get_years())>0)
	{
		month=get_month();
		days=get_days(month);
		for(i=0;i<month;i++)
		{
			total +=years[i].days;
		}
		total +=days;
		printf("%d years up to %s %dth total have %d days\n",years,years[month].monthname,days,total);
		printf("Next years:\n");
		
	}
	printf("Bye.\n");
	
	return 0;
}
int get_years(void)
{
	
	return ret;
}
int get_month()
{
	int ret=0;
	int i;
	char choice[LEN];
	
	printf("Please enter a month:(number or month name)");
	while(scanf("%d",&ret)!=1&&s_gets(choice,LEN)==NULL)
		printf("Error ! please enter a number 1-12 or string(month name)\n");
	
	if(!ret)
	{
		for(i=0;i<12;i++)
		{
			if(strcmp(tolower(choice),tolower(years[i].monthname)))
			{
				ret=i+1;
				break;
			}
			else if(strcmp(tolower(choice),tolower(years[i].shortname)))
			{
				ret=i+1;
				break;
			}
		}
	}
	return ret;
}









