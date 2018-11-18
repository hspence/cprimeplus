#include <stdio.h>
#include <stdlib.h>
void sign_off(void);
void too_bad(void);

int main(void)
{
    int n;
    atexit(sign_off);//注册退出函数,后注册的先执行

    puts("Enter an integer:");
    if(scanf("%d",&n)!=1)
    {
        puts("That 's no integer!\n");
        atexit(too_bad);
        exit(EXIT_FAILURE);
    }
    printf("%d is %s .\n",n,n%2==0?"even":"odd");

    return 0;
}

void sign_off(void)
{
    puts("Thus terminates another magnificent program from");
    puts("SeeSaw Software");
}
void too_bad(void)
{
    puts("SeeSaw Software extends its hearfelt condolences");
    puts("to you upon the failure of your program.");
}
