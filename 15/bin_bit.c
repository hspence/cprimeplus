#include <stdio.h>
#include <limits.h>
char * itobs(int n,char * ps);
void show_bin(char * ps);

int main(void)
{
	int number;
	char bin_str[CHAR_BIT*sizeof(int)];
	
	puts("Enter integers and see them in binary.");
	while(scanf("%d",&number)==1)
	{
		itobs(number,bin_str);
		printf("%d is ",number);
		show_bin(bin_str);
		putchar('\n');
		
	}
	puts("Done.");
	
	return 0;
}
char * itobs(int n,char * ps)
{
	int i;
	static int size=sizeof(int)*CHAR_BIT;
	for(i=size-1;i>=0;i--,n>>=1)
	{
		ps[i]=(01&n)+'0';
	}
	ps[size]='\0';
	
	return ps;
}

void show_bin(char * ps)
{
	int i=0;
	while(ps[i])
	{
		putchar(ps[i]);
		if(++i%4==0&&ps[i])
			putchar(' ');
	}
}















