#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
#define ROW 20
#define COL 30

int main(void)
{
    FILE * fp1;
    FILE * fp2;

    int i=0,j=0;
    int digit[ROW][COL];
    
    char in_file[SIZE];
    char out_file[SIZE];
    char result[ROW][COL+1];
    char ch[]={" .':~*=%#&"};

    printf("Enter the source file name:\n");
    scanf("%s",in_file);
    if((fp1=fopen(in_file,"r"))==NULL)
    {
        fprintf(stderr,"Error opening %s file.\n",in_file);
        exit(EXIT_FAILURE);
    }
    printf("Enter the target file name:\n");
    scanf("%s",out_file);
    if((fp2=fopen(out_file,"w"))==NULL)
    {
        fprintf(stderr,"Error opening  %s file.\n",out_file);
        exit(EXIT_FAILURE);
    }
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++) 
        {
            fscanf(fp1,"%d",&digit[i][j]);            
            result[i][j]=ch[digit[i][j]];
        }
        result[i][j]='\0';
    }
    for(i=0;i<ROW;i++)
    {
        fprintf(stdout,"%s\n",result[i]);
        fprintf(fp2,"%s\n",result[i]);
    }
    if(fclose(fp1)||fclose(fp2))
        fprintf(stderr,"Error closing file.\n");

    return 0;
}
