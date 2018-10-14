#include <stdio.h>

struct gas 
{
	float distance;
	float gals;
	float mpg;
};

int main(void)
{
	printf("Hello,world!\n");	
	return 0;
}
struct gas mpg_gas(struct gas mode)
{
	if(mode.gals>0)
		mode.mpg=mode.distance/mode.gals;
	else
		mode.mpg=-1.0;
	return mode; 
}
 mpg_value(struct gas mode)
{
	return mode.distance/mode.gals;
}
