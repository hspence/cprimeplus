#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 40

int btoi(char * st);
char * s_gets(char * st,int n);
int main(void)
{
	char bin_str[SIZE];
	int num;
	printf("Please enter the binary string:\n");
	while(s_gets(bin_str,SIZE)!=NULL&&bin_str[0]!='\0')
	{
		printf("The binary number %s is %d.\n",bin_str,btoi(bin_str));
		printf("Nxet binary number:");
		
	}	
	printf("Bye.\n");
	
	return 0;
}
int btoi(char * st)
{
	int i,j;
	int ret=0;
	int len;
	len=strlen(st);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		ret +=(st[i]-'0')*pow(2,j);
	}
	return ret;
}
char * s_gets(char * st,int n)
{
	char * find;
	char * ret_val;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}















