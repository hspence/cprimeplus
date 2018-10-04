#include <stdio.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    FILE * fp;
    char ch;
    int i;
    for(i=1;i<argc;i++)
    {
        if((fp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"Error in opening file %s",argv[i]);
            exit(EXIT_FAILURE);
        }
        printf("The %s file contents is :\n",argv[i]);
        while((ch=getc(fp))!=EOF)
        {
            putc(ch,stdout); 
        }
        fclose(fp);
        putchar('\n');
    }
    printf("Done.\n");
    return 0;
}
