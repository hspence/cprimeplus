#include <stdio.h>
#include <stdlib.h>
#define SIZE 41

int main(void)
{
    FILE * fp;
    char word[SIZE],filename[SIZE];
    int count=0,count1=0;

    fprintf(stdout,"Please input file name:\n");
    scanf("%s",filename);
    if((fp=fopen(filename,"a+"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s",filename);
        exit(EXIT_FAILURE);
    }
    printf("please enter word:(press # at new line to end)\n");
    while(scanf("%40s",word)>0&&word[0]!='#')
    {
        fprintf(fp,"%s\n",word);
        count++;
    }
    printf("add %d word. \n",count);
    rewind(fp);
    printf("The file contents:\n");
    while((fgets(word,SIZE,fp)!=NULL))
    {       count1++;
            fprintf(stdout,"%d. %s",count1,word);
    }
    printf("Done.\n");
    if(fclose(fp)!=0)
        fprintf(stderr,"Error in closing file.\n");
    
    return 0;
}
