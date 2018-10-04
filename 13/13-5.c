#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF 4096

int main(int argc,char * argv[])
{
    FILE * t_fp;
    FILE * s_fp;
	char ch;
	size_t bytes;
	char temp[BUF];
	int i;
	
    if((t_fp=fopen(argv[1],"ab+"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s ",argv[1]);
        exit(EXIT_FAILURE);
    }
    for(i=2;i<argc;i++)
    {
        if((s_fp=fopen(argv[i],"rb+"))==NULL) 
    	{
    		fprintf(stderr,"Error in opening file %s \n",argv[i]);
    		exit(EXIT_FAILURE);
		}
		while((bytes=fread(temp,sizeof(char),BUF,s_fp))>0)
			fwrite(temp,sizeof(char),bytes,t_fp);
		
		printf("Now file %s appended \n",argv[i]);
	}
	rewind(t_fp);
	printf("Now %s file contents:\n",argv[1]);
	while((ch=getc(t_fp))!=EOF)
		putc(ch,stdout);
	puts("Done displaying.");
	fclose(t_fp);
	fclose(s_fp);
	
    return 0;
}

