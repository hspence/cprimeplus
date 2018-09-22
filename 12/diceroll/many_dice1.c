#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll1.h"

int main(void)
{
	int dice,sides;
	int i,number;
	
	printf("Enter the number of sets: (enter q to stop:)\n");
	while(scanf("%d",&number)==1)
	{
		srand((unsigned int) time(0)); 
		printf("How many sides and how many dice?\n");
		
		while(scanf("%d %d",&sides,&dice)!=2)
		{	
			printf("Error!,try again!\n");
			while(getchar()!='\n')
				continue;
			}	
		
		printf("Here are %d sets of %d %d-sides throws.\n",number,dice,sides);
		
		for(i=0;i<number;i++)
			printf(" %d",roll_n_dice(dice,sides));
			if(i%7==0)
				putchar('\n');
	
	putchar('\n');
	printf("Enter the number of sets: (enter q to quit)\n");
	}
	return 0;
}

