#include <stdio.h>
static int times=0;
void fun();

int main(void)
{
    int n;
    int i=0;
    printf("How many times?\n");
    scanf("%d",&n);

    for(i=0;i<(n*2);i++) 
    {
        fun();
        printf("The function was called %d times.\n",times);
}
    return 0;
}
void fun()
{
    times++;
}
