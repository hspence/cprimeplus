#include <stdio.h>
#include <limits.h>
char * itobs(int n,char * ps);
int main(void)
{
	int i=1;
	char bin_str[CHAR_BIT*sizeof(int)+1];
	printf("i=%d ,to binary:%s\n",i,itobs(i,bin_str));
	i=~i;
	printf("i=%d,to binary:%s\n",i,itobs(i,bin_str));
	return 0;
}

char * itobs(int n,char * ps)
{
	int i;
	static unsigned int size =sizeof(int)*CHAR_BIT;
	for(i=size-1;i>=0;i--,n>>=1)
	{
		ps[i]=(01&n)+'0';
	}
	ps[size]='\0';
	return ps;
}


