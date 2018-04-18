#include <stdio.h>
#include <string.h>
char get_first();

int main(void){
    char ch;
   ch=get_first();
    printf("%c",ch);
    
    return 0;
}
char get_first(){
    char ch;
    while(isspace((ch=getchar()))) continue;
    while(getchar()!='\n') continue;
    return ch;

}
