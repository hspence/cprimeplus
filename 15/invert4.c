#include <stdio.h>
#include <limits.h>

char * itobs(int n,char * ps);
void show_bin(char * ps);
int invert_end(int num,int bits);

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
		number=invert_end(number,4);
		printf("Inverting the last 4 bits gives:\n");
		show_bin(itobs(number,bin_str));
		putchar('\n');
	}
	puts("Bye!");
	
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
int invert_end(int num,int bits)
{
	int mask=0;
	int bitval=1;
	while(bits-->0)
	{
		mask |=bitval;//把mask的其中的一个位设置为1
		bitval<<=1;//bitval位中的1向左移动，逐位使mask的值变为1
	}
	return num^mask;
}





















