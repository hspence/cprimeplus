#include <stdio.h>
#include <limits.h>
char * itobs(int n,char * st);
int main(void)
{
	int num,loc;
	char bin_str[CHAR_BIT*sizeof(int)+1];
	printf("please enter the number :(enter q to quit.\n");
	while(scanf("%d",&num)==1)
	{
		printf("Please enter ther location:\n");
		scanf("%d",&loc);
		printf("The number %d to binary is %s \n",num,itobs(num,bin_str));
		printf("And the location %d is %d \n",loc,(num>>=loc)&01);
		printf("Next number:(enter q to quit.\n");
	}
	return 0;
}
char * itobs(int n,char * st)
{
	int i;
	int len=sizeof(int)*CHAR_BIT;
	for(i=len-1;i>=0;i--,n>>=1)
	{
		st[i]=(01&n)+'0';
	}
	st[len]='\0';
	
	return st;
}










