#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 41

int main(void)
{
	char words[MAX];
	FILE *fp;
	if((fp=fopen("wordy","a+"))==NULL)
	{
		fprintf(stdout,"Can't open the \'wordy\'file!\n");
		exit(EXIT_FAILURE);
	}
	
	puts("Enter words to add to the file:press # key");
	puts("at the beging of a line to terminate.");
	while(fscanf(stdin,"%s",words)==1&& words[0] !='#' )
		fprintf(fp,"%s\n",words);
	
	puts("File contents:");
	
	rewind(fp);
	while(fscanf(fp,"%s",words)==1)
		puts(words);
	puts("Done");
	if(fclose(fp)!=0)
		fprintf(stderr,"Error closing file\n");
	
	
	return 0;
}
