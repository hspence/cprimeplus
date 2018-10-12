#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds 
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;	
};
double sum(struct funds money[],int n);

int main(void)
{
	struct funds jones[N]= {
	{
		"Garlic-Melon Bank",
		4032.27,
		"Luck's Saving and loan",
		8543.94
		},
	{
		"Honest Jack's bank",
		3620.88,
		"Party Time Saving",
		3802.91
		}	
	};
	printf("The Joness have a total of %.2f.\n",sum(jones,N));
	
	return 0;
}

double sum(struct funds money[],int n)
{
	double total=0;
	int i;
	for(i=0;i<n;i++)
		total += money[i].bankfund+money[i].savefund;
	return(total);
}








