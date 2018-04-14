#include <stdio.h>
char get_choice();
int get_int();
char get_first();
void count();

int main(void){
    int choice;
    while((choice=get_choice())!='q'){

        switch(choice)
        {
            case 'a':
                printf("Buy low,sell high");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default:
                printf("Program error!\n");
                break;
    }
}
    printf("Bye.\n");
    return 0;
}

void count(void){
    int n,i;

    printf("Count how far? Enter an integer:\n");
    n=get_int();
    for(i=1;i<=n;i++){
        printf("%d\n",i);
}
    while(getchar()!='\n')  continue;
}

char get_choice(){
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a.advice          b.bell\n");
    printf("c.count           q.quit\n");
    ch=get_first();
    while((ch<"a"&&ch>'c')&&(ch!='q')){
        printf("Please respond with a,b,c or q.\n");
        ch =get_first();

}
    return ch;
    
}

char get_first(){
    int ch;

    ch=getchar();
    while(getchar()!='\n'){
        continue;
}
    return ch;
}

int get_int(){

    int input;
    char ch;
    
    while(scanf("%d",&input)!=1){

        while((ch=getchar())!='\n') putchar(ch);
        printf("is no integer!\n,please enter a integer:\n");
        
}
    return input;
}

