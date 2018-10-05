#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    FILE * fp;
    int count=0;
    int i;
    char ch;
    if(argc<2)
    {
        fprintf(stderr,"Usage: %s [char] [filename]",argv[0]);
        exit(EXIT_FAILURE);
    }
    if(argc==2)
    {
        fprintf(stdout,"Please input some text\n");
        while((ch=getchar())!=EOF)
        {
            if(ch==argv[1][0]) 
                count++;
        }
        printf("Now you input text has \'%s\' character %d times",argv[1],count);
    }
    if(argc>2)
    {
        for(i=2;i<argc;i++) 
        {
            if((fp=fopen(argv[i],"r"))==NULL) 
            {
                fprintf(stderr,"Error in opening file %s",argv[i]);
                exit(EXIT_FAILURE);
            }
            while((ch=getc(fp))!=EOF)
                count++;
            printf("The file %s has %s characters %d times.\n",argv[i],argv[1],count);
        }
    }
    puts("Done.");

    return 0;
}
