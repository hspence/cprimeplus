#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF 256

int main(int argc,char * argv[])
{
    FILE * fp;
    char string[BUF];

    if(argc!=3)
    {
        fprintf(stderr,"Usage:%s [string] [filename]",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s",argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(string,BUF,fp)!=NULL)
    {
        if(strstr(string,argv[1])!=NULL) 
            printf("%s",string);
    }
    if(fclose(fp))
        fprintf(stderr,"Error closing file\nl");
    return 0;
}
