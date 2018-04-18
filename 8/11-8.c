#include <stdio.h>
float get_num();
char get_choice();
void get_printf(void);

int main(void){
    char ch;
    float num1,num2;
    do{
        get_printf();
        ch=get_choice();
        if(ch=='a'){
            num1=get_num();
            num2=get_num();
            printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
        }
        if(ch=='b'){
            num1=get_num();
            num2=get_num();
            printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
        }
        if(ch=='c'){
            num1=get_num();
            num2=get_num();
            printf("%.2f x %.2f = %.2f\n",num1,num2,num1*num2);
        }
        if(ch=='d'){
            num1=get_num();
            while((num2=get_num())==0) printf("The second number can't be zero!\n");
            printf("%.2f / %.2f = %.2f\n",num1,num2,num1/num2);
    }
        if(ch=='q'){
            break;
    } 
}while(1);


    return 0;
}

void get_printf(void){

    printf("Enter the operation of your choice:\n");
    printf("a.      +       b.      -       \n");
    printf("c.      x       d.      /       \n");
    printf("q.quit\n");
}

char get_choice(void){
    char ch;
    do{
        printf("Please enter your choice;\n");
        ch=getchar();
        while(getchar()!='\n') continue;
}while(!(ch=='q'||(ch>='a'&&ch<='d')));

    return ch;
}

float get_num(void){
    float num;
    char ch;
    printf("Please enter  a number:\n");
    while(scanf("%f",&num)!=1){
        while((ch=getchar())!='\n') putchar(ch);
        printf(" is not number!\n");
        printf("Please enter a number:\n");
}
    while(getchar()!='\n') continue;

    return num; 
    }
