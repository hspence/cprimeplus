#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
int main(void)
{
	char filename[SIZE];
	int count=0;
	FILE * fp;
	char ch;
	
	printf("Please input file name :\n");
	scanf("%s",filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		fprintf(stderr,"Error in opening file %s",filename);
		exit(EXIT_FAILURE);
	}
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		count++;		
	}
	fclose(fp);
	printf("File  %s has %d characters\n",filename,count);
		
	return 0;
}
