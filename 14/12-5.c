#include <stdio.h>
#define LEN 5
#define SIZE 10

struct month 
{
	char name[SIZE];
	char s_name[LEN];
	int days;
	int month_num;
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
		{"December","dec",31,12},
	};
	int days=0;
	int mouth;
	int i;
	printf("Please enter a month:\n");
	while(scanf("%d",&mouth)==1)
	{	
		if(mouth<1||mouth>12)
		{
			printf("Error,please enter a number 1 to 12:\n");
			continue;
		}
		for(i=0;i<mouth;i++)
		{
			days += years[i].days;
		}
		printf("%s have %d days \n",years[mouth-1].name,days);
		days=0;
		printf("Next :\n");
	}
	printf("good bye.\n");
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
