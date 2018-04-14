#include <stdio.h>
#include <ctype.h>

int main(void){

    int upper=0,lower=0;
    char ch;
    while((ch=getchar())!=EOF){
        if(isupper(ch)) upper++;
        if(islower(ch)) lower++;

}
    printf("The text has %d upper .\n",upper);
    printf("The text has %d lower .\n",lower);
    printf("Bye.");
    return 0;
}
