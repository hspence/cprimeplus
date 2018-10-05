#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define BUF 256
int main(int argc,char * argv[])
{
    char file1[SIZE],file2[SIZE];
    FILE * fp1;
    FILE * fp2;
    char ch1,ch2;

    if(argc==1)
    {
        fprintf(stdout,"Please enter the first filename:\n");
        scanf("%s",file1);
        fprintf(stdout,"Please enter the second filename:\n");
        scanf("%s",file2);
    }
    else
    {
        strcpy(file1,argv[1]);
        strcpy(file2,argv[2]);
    }

    if((fp1=fopen(file1,"r"))==NULL ||(fp2=fopen(file2,"r"))==NULL)
    {
        fprintf(stderr,"Error in opening file.\n");
        exit(EXIT_FAILURE);
    }
    do
    {
    while((ch1=getc(fp1))!=EOF&&ch1!='\n') 
        putchar(ch1);
    while((ch2=getc(fp2))!=EOF&&ch2!='\n')
        putchar(ch2);
    putchar('\n');
    
    }while(ch1!=EOF || ch2 !=EOF);

    fclose(fp1);
    fclose(fp2);
    puts("Done.");

    return 0;
}
