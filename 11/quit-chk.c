#include <stdio.h>
#include <string.h>
#define STOP "quit"
#define SIZE 80
#define LIM 10
char * s_gets(char * st,int n);

int main(void)
{
    char input[LIM][SIZE];
    int ct =0;
    printf("Enter up %d lines (type quit to quit:)\n",LIM);
    while(ct<SIZE && s_gets(input[ct],SIZE) && strcmp(input[ct],STOP) )
    {
        ct++;
    }
    printf("%d lines strings entered \n",ct);

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    int i=0;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i] !='\0') i++;
        if(st[i]=='\n') st[i]='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}
