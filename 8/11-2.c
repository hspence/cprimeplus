#include <stdio.h>

int main(void){
    char ch;
    int i=0;
    while((ch=getchar())!=EOF){
        if(ch>=' '){
            printf("%c:%d ",ch,ch);
            i++;
            if(i%10==0) printf("\n");
        }
        else if(ch=='\n') printf("\\n:%d",ch);
        else if(ch=='\t') printf("\\t:%d",ch);
        else 
            continue;

    }
    printf("Bye.\n");


    return 0;
}
