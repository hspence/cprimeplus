#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void)
{
    int i,j;
    FILE * fp;
    if((fp=fopen("result.txt","w"))==NULL)
    {
        fprintf(stderr,"Error opening file.\n");
        exit(EXIT_FAILURE);
    }
    srand((unsigned int) time(0));
    for(i=0;i<20;i++)
    {
        for(j=0;j<30;j++) 
        {
            fprintf(fp,"%d",rand()%10);
            if(j!=29)
                fprintf(fp," ");
        }
        putc('\n',fp);
    }
    if(fclose(fp))
        fprintf(stderr,"Error closing file.\n");
    puts("Done.\n");
    return 0;
}
