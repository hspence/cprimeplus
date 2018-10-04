#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 40

int main(void)
{
    FILE * s_fp;
    FILE * t_fp;
    char source_filename[SIZE];
    char target_filename[SIZE];
    char ch;

    printf("Please input the source file name:\n");
    scanf("%s",source_filename);
    printf("Please input the target file name:\n");
    scanf("%s",target_filename);

    if((s_fp=fopen(source_filename,"r"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s",source_filename);
        exit(EXIT_FAILURE);
    }
    if((t_fp=fopen(target_filename,"w"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s",target_filename);
        exit(EXIT_FAILURE);
    }
    while((ch=getc(s_fp)) !=EOF)
    {
        putc(toupper(ch),t_fp);
    }
    fclose(s_fp);
    fclose(t_fp);

    return 0;
}
