#include <stdio.h>
#include <stdlib.h>
#define BUF 256

int main(int argc,char * argv[])
{
    FILE * s_fp;
    FILE * t_fp;
    char temp[BUF];

    if(argc !=3)
    {
        fprintf(stderr,"Usage: %s [sorce filename],[target filename]\n",argv[0]);
        exit(EXIT_FAILURE);
    } 
    if((s_fp=fopen(argv[1],"rb"))==NULL||(t_fp=fopen(argv[2],"wb"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s or %s",argv[1],argv[2]);
        exit(EXIT_FAILURE);
    }
    while(fgets(temp,BUF,s_fp)!=NULL)
    {
        fputs(temp,t_fp);
    }
    fclose(s_fp);
    fclose(t_fp);
    printf("Done\n");
    return 0;
}
