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
    char temp1[BUF],temp2[BUF];
    char * ret_val1;
    char * ret_val2;

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
    if((ret_val1=fgets(temp1,BUF,fp1))!=NULL)  
        fputs(temp1,stdout);
    if((ret_val2=fgets(temp2,BUF,fp2))!=NULL)
        fputs(temp2,stdout);
    }while(ret_val1!=NULL || ret_val2 !=NULL);



    fclose(fp1);
    fclose(fp2);
    puts("Done.");

    return 0;
}
