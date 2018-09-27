#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp=fopen("text.txt","r");
    fseek(fp,0L,SEEK_END);
    long num=ftell(fp);
    printf("The num is %ld",num);
    return 0;
}
