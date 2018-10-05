#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

int main(void)
{
    char file[SIZE];
    FILE * fp;
    long loc;
    char ch;

    fprintf(stdout,"Enter the file name:\n");
    scanf("%s",file);
    
    if((fp=fopen(file,"r"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s",file);
        exit(EXIT_FAILURE);
    }
    printf("Ener a location:\n");
    while(scanf("%ld",&loc)==1)
    {
        fseek(fp,loc,SEEK_SET);
        while((ch=getc(fp))!='\n'&&ch!=EOF)
        {
             putchar(ch); 
        }
        putchar('\n');
    printf("Next location:\n");
    }
    if(fclose(fp))
        fprintf(stderr,"Error in closing file\n");
    return 0;
}
