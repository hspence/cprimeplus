#include <stdio.h>
#define SIZE 40
char * s_get_n(char *,int);
int main(void)
{
    char string[SIZE];
    s_get_n(string,10);
    printf("string=%s",string);
    return 0;
}
char * s_get_n(char string[],int n)
{
   int count=0;
   while(count<n)
       string[count++]=getchar();
   string[count++]='\0';
    return string; 
}
