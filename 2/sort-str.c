#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *string[],int num);
char * s_gets(char * st,int n);

int main(void)
{
    char input[LIM][SIZE];
    char *ptstr[LIM];
    int ct =0;
    int k;

    printf("Input up to %d lines,and I will sort them.\n",LIM);
    printf("To stop,press the Enter key at  a line 's start.\n");
    while(ct<LIM && s_gets(input[ct],SIZE) != NULL&& input[ct]!='\0')
    {
        ptstr[ct]=input[ct];
        ct++;
    }
    
    return 0;
}




char * s_gets(char * st,int n)
{
    char * ret_val;
    int i=0;
    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i] !='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}
