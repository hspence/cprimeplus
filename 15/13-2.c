#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
char * itobs(int n,char * st);
int bstoi(char * st);

int main(int argc,char * argv[])
{
	char bin_str0[sizeof(int)*CHAR_BIT+1];
	char bin_str1[sizeof(int)*CHAR_BIT+1];
	char bin_str2[sizeof(int)*CHAR_BIT+1];
	int num1,num2;
	
	if(argc !=3)
		fprintf(stderr,"Error ,The program at least need 2 argument.\n");
	num1=bstoi(argv[1]);
	num2=bstoi(argv[2]);
	itobs(num1,bin_str1);
	itobs(num2,bin_str2);
	printf("to.\n");
	printf("binary number:~ %s is %s\n",bin_str1,itobs(~num1,bin_str0));
	printf("binary number:~ %s is %s\n",bin_str2,itobs(~num2,bin_str0));
	
	printf("%s & %s = %s\n",bin_str1,bin_str2,itobs(num1&num2,bin_str0));
	printf("%s | %s = %s\n",bin_str1,bin_str2,itobs(num1|num2,bin_str0));
	printf("%s ^ %s = %s\n",bin_str1,bin_str2,itobs(num1^num2,bin_str0));
	
	return 0;
}
char * itobs(int n,char * st)
{
	int i;
	int len=(CHAR_BIT*sizeof(int));
	for(i=len-1;i>=0;i--,n>>=1)
	{
		st[i]=(n&01)+'0';
	}
	st[len]='\0';
	return st;
}
int bstoi(char * st)
{
	int ret=0;
	int i,j;
	int len=strlen(st);
	for(i=len-1,j=0;i>=0;i--,j++)
		ret +=(st[i]-'0')*pow(2,j);
	return ret;
}



























