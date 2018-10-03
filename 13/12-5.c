#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256

int inString(char *,char);

int main(int argc,char * argv[])
{
 	char ch; 
	char string[SIZE];	
	FILE * fp;
	if(argc<3)
	{
		fprintf(stderr,"Usage:%s [char] [filename]",argv[0]);
		exit(EXIT_FAILURE);
	}
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		fprintf(stderr,"Error in opening file %s",argv[2]);
		exit(EXIT_FAILURE);
	}
	ch=argv[1][0];
	while(fgets(string,SIZE,fp)!=NULL)
	{
		if(inString(string,ch))
		{
			fputs(string,stdout);
		}	
	} 
	printf("Done.\n");
	fclose(fp);
	return 0;
}

int inString(char * string,char ch)
{
	int result=0;
	int i,num;
	num=strlen(string);
	for(i=0;i<num;i++)
	{
		if(string[i]==ch)
		{
			result=1;
			break;
		}
	}
	return result;
}











