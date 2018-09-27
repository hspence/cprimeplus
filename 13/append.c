#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source,FILE *dest);
char * s_gets(char * st,int n);

int main(void)
{
    int file=0;
    FILE *fa,*fs;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    puts("Enter name of destination file:");
    s_gets(file_app,SLEN);
    if((fa=fopen(file_app,"a+"))==NULL)
    {
        fprintf(stderr,"Can't open %s \n",file_app);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa,NULL,_IOFBF,BUFSIZE)!=0)
    {
        fputs("Can't create output buffer\n",stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file(empty line to quit):");
    while(s_gets(file_src,SLEN)&&file_src[0]!='\0')
    {
        if(strcmp(file_src,file_app)==0)
            fputs("Can't apped file to itself\n",stderr);
        else if((fs=fopen(file_src,"r"))==NULL)
            fprintf(stderr,"Can't open %s \n",file_src);
        else
        {
           if(setvbuf(fs,NULL,_IOFBF,BUFSIZE)!=0) 
            {
                fputs("Can't create input buffer\n",stderr);
                continue;
            }
           append(fs,fa);
           if(ferror(fs)!=0)
               fprintf(stderr,"Error in reading file %s.\n",file_src);
           if(ferror(fa)!=0)
               fprintf(stderr,"Error in writing file %s.\n",file_app);
           fclose(fs);
           files++;
           printf("File %s appended.\n",file_src);
           puts("Next file (empty line to quit):");
        }
    }
    printf("Done appending.%d files appended.\n",files);
    rewind(fa);
    printf("%s contents:\n",file_app);
    while((ch=getc(fa))!=EOF)
        putchar(ch);
    puts("Done displaying.");
    fclose(fa);

    return 0;
}

void append(FILE *source,FILE *dest)
{
    size_t
}
