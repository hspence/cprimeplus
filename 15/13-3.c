#include <stdio.h>
#include <limits.h>
void show_bin(int n);
int get_bit(int n);

int main(void)
{
	int num;
	printf("Please enter a number:\n");
	while(scanf("%d",&num)==1)
	{
		printf("The number %d to binary:",num);
		show_bin(num);
		printf(" have open %d bit.\n",get_bit(num));
		printf("Next number:(empty line to quit.\n");
	}
	printf("Bye.\n");
	return 0;
}
void show_bin(int n)
{
	int i;
	int len=CHAR_BIT*sizeof(int);
	char bin_str[len+1];
	
	for(i=len-1;i>=0;i--,n>>=1)
	{
		bin_str[i]='0'+(n&01);
	}
	bin_str[len]='\0';
	i=0;
	while(bin_str[i])
	{
		putchar(bin_str[i]);
		if(++i%4==0&&bin_str[i]!='\0')
			putchar(' ');
	}
}
int get_bit(int n)
{
	int num=0;
	for(;n>0;n>>=1)
		if(n&01)
			num +=1;
	return num;
}

















