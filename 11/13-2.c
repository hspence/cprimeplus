#include <stdio.h>
#include <ctype.h>
char * s_get_n(char*,int);

int main(void)
{
    char string[40];
    s_get_n(string,14);
    printf("The string is %s",string);

    return 0;
}

char * s_get_n(char * string,int n)
{
    int count=0;
    char temp;
    if(count<n&&!(isspace(temp=getchar())))
        string[count++]=temp;
    string[count++]='\0';
    return string;

}
