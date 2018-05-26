#include <stdio.h>
#include <ctype.h>
char * get_word(char*);
int main(void)

{
    char string[20];
    get_word(string);
    puts(string);

    return 0;
}

char * get_word(char * string)
{
    char temp;
    while(isspace(temp=getchar()))
        continue;
    do{
        *string++ =temp;
    }while(!isspace(temp=getchar()));
    *string='\0';
    return string;

}
