#include <stdio.h>
#include <string.h>

int main(int argc,char * argv[])
{
    FILE * t_fp;
    FILE * s_fp;

    if((t_fp=fopen(argv[1],"a+"))==NULL)
    {
        fprintf(stderr,"Error in opening file %s ",argv[1]);
        exit(EXIT_FAILURE);
    }
    for(i=2;i<argc;i++)
    {
        if((s_fp=fopen(argv[i],"r"))) 
    }
    return 0;
}

