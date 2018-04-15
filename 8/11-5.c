#include <stdio.h>

char get_input();

int main(void){
    int isflase=1, num=50;
    char ch;
    printf("I can guess a number that you think in your heart\n");
    while(isflase){
        
        printf("The number is %d?,it is  bigger than %d ,or smaller?\n",num,num);
        printf("If it  is %d,,please enter yes\n",num);
        printf("please enter bigger or smaller\n");
        ch=get_input();
    
        if(ch=='s') num=num/2;
        if(ch=='b') num=num+num/2;
        if(ch=='y'){
            isflase=0;
            break;
    }

}  
    return 0;
}

char get_input(){

    char ch;
    ch=getchar();
    while(getchar()!='\n') continue;
    return ch;
}
