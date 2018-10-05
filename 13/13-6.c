#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40

int main(void)
{
    FILE * in;
    FILE * out;
    char infile[SIZE],outfile[SIZE];
    int i=0;
    char ch;

    printf("Please input resource file:\n");
    scanf("%s",infile);
    printf("Please input output file:\n");
    scanf("%s",outfile);
    if((in=fopen(infile,"r"))==NULL || (out=fopen(outfile,"w"))==NULL)
    {
        fprintf(stderr,"Error in opening file \n");
        exit(EXIT_FAILURE);
    }
    while((ch=getc(in))!=EOF)
    {
        if(i++ % 3 ==0)
            putc(ch,out);
    }
    printf("Done.\n");
    fclose(in);
    fclose(out);

    return 0;
}
