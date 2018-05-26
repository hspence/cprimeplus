#include <stdio.h>
char * s_get(char *,int);
int main(void){
    char in[6];
    s_get(in,5);
    puts(in);
    return 0;
}

char * s_get(char *str,int n)
{
    char * ret_val;

    ret_val=fgets(str,n,stdin);
    if(ret_val)
    {
        while (*str != '\n'&&str != '\0')
            str++;
        if(*str=='\n')
            *str='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;

}
