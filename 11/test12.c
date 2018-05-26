#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * find_space(char *);
int main(void)
{
    char * string="xixi xixi";
    if(find_space(string)!=NULL)
        printf("get it \n");
    return 0;
}

char * find_space(char *st)
{
    while(isspace(*st)!=0)
        st++;
    if(*st=='\0')
        return NULL;
    else
        return st;
    

}
