#include <stdio.h>
#include <ctype.h>

int to_int(char);
int main(void){
    char ch;
    int result;

    while((ch=getchar())!=EOF){
//        while(getchar()!='\n') continue;
        if((result=to_int(ch))!=-1){
            printf("The %c to number is:%d \n",ch,result);
    }
}
    printf("Goodbye.\n");
    return 0;
}

int to_int(char ch){
    ch=toupper(ch);
    if(ch>='A'&&ch<='Z') return ch-'A'+1;
    else return -1;
}
