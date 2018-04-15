#include <stdio.h>

char get_input();

int main(void){
    int up=100,down=0,isfalse=1; 
    char ch;
    printf("I can guess a number that you think in your heart\n");
    while(isfalse){
        
        printf("The number is %d?,it is  bigger than %d ,or smaller?\n",(up+down)/2,(up+down)/2);
        printf("If it  is %d,,please enter yes\n",(up+down)/2);
        printf("please enter bigger or smaller\n");
        ch=get_input();
    
        if(ch=='s') up=(up+down)/2;
        if(ch=='b') down=(up+down)/2; 
        if(ch=='y'||up==down){
            isfalse=0;
            break;
    }

}  
    printf("It is %d? yeah ,I konw i am right..\n",(up+down)/2);

    return 0;
}

char get_input(){

    char ch;
    ch=getchar();
    while(getchar()!='\n') continue;
    return ch;
}
