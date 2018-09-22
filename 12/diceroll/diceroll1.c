#include <stdio.h>
#include <stdlib.h>
#include "diceroll.h" 

int roll_count=0;

static int rollem(int sides)
{
	int num;
	roll_count++;
	num=rand()%sides+1;
		
	return num;
}
int roll_n_dice(int dice,int sides)
{
	int i,total=0;
	for(i=0;i<dice;i++)
		total += rollem(sides);
	return total;
}
