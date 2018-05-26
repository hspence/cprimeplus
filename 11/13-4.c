#include <stdio.h>
#include <ctype.h>
char * get_word(char*,int);
int main(void)

{
    char string[20];
    get_word(string,10);
    puts(string);

    return 0;
}

char * get_word(char * string,int n)
{
    char temp;
    int count=0;
    while(isspace(temp=getchar()))
        continue;
    do{
        *string++ =temp;
        count++;
    }while(!isspace(temp=getchar())&&count<n);
    *string='\0';
    return string;

}
