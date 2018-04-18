#include <stdio.h>
#include <ctype.h>

int to_int(char);
int main(void){
    char ch;
    int result;

    while((ch=getchar())!=EOF){
        while(getchar()!='\n') continue;
        if((result=to_int(ch))!=-1){
            printf("The %c to number is:%d \n",ch,result);
    }
}
    return 0;
}

int to_int(char ch){
    if(ch>='A'&&ch<='z'){
    ch=toupper(ch);
    return ch-'A'+1;
}
}
