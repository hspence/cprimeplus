#include <stdio.h>
#define STL 40

int main(void)
{
    char name[STL];
    gets(name);
    printf("This is printf function:%s \n",name);
    puts(name);
    if(getchar()=='\n')
    {
        puts("it dont't put in the n");
}
    return 0;
}
