#include <stdio.h>
#include <limits.h>
#include <math.h>
int LEN=CHAR_BIT*sizeof(unsigned int);

char * itobs(unsigned int num,char * st);
unsigned int bstoi(char * st);
unsigned int rolate_l(unsigned int num,unsigned int loc);

int main(void)
{
	unsigned int num,loc;
	char bin_str[LEN+1];
	printf("Please enter a numebr :(enter q to quit.\n");
	while(scanf("%d",&num)==1)
	{
		printf("rolate var?:\n");
		scanf("%d",&loc);
		printf("The number %d to binary is %s\n",num,itobs(num,bin_str));
		num=rolate_l(num,loc);
		printf("After rolate %d location.\n",loc);
		printf("number:%d  binary : %s \n",num,itobs(num,bin_str));
		printf("Next number ?:\n");
	}
	
	return 0;
}
char * itobs(unsigned int num,char * st)
{
	int i;
	for(i=LEN-1;i>=0;i--,num>>=1)
		st[i]=(num&01)+'0';
	st[LEN]='\0';
	
	return st;
}
unsigned int rolate_l(unsigned int num,unsigned int loc)
{
	unsigned int ret;
	int i;
	char bin_str[LEN+1];
	
	itobs(num>>loc,bin_str);
	for(i=loc-1;i>=0;i--,num>>=1)
	{
		bin_str[i]=(num&01)+'0';
	}
	ret=bstoi(bin_str);
	return ret;
}
unsigned int bstoi(char * st)
{
	unsigned int ret=0;
	int i,j=0;
	for(i=LEN-1;i>=0;i--,j++)
		ret +=(st[i]-'0')*pow(2,j);
	return ret;
}





