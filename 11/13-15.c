#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int fun(char *);

int main(int argc,char * argv[])
{
	int result=0;
	if(result=fun(argv[1]))
		printf("The argument is %d \n",result);	
	else 
		printf("It isn't a digit.\n");
	return 0;
}
int fun(char * num)
{
	int result,i=0;
	while(isdigit(num[i]))
		i++;
	if(num[i])
		result=0;
	else
		result=atoi(num);
	return result;
}
