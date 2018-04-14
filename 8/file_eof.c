#include <stdio.h>
#include <stdlib.h>
int main(void){
    int ch;
    char filename[50];
    printf("please enter a file name:\n");
    scanf("%s",filename);
    FILE * fp;
    fp=fopen(filename,"r");
    if(fp==NULL){
        printf("open file FAIL..");
        exit(0);
}
    while((ch=getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);

    
    
    return 0;
}
