#include <stdio.h>
int main(void){
    float ch;
    char c;
    while(scanf("%f",&ch)!=1){
        while((ch=getchar())!='\n'){
            putchar(ch);
    }
        printf(" is not a number!\n");
}
    return 0;
}
