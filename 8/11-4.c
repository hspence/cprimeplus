#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int words=0,alphs=0,isinword=0;
    float div;
    while((ch=getchar())!=EOF){
        if(isupper(ch)||islower(ch)){
            isinword=1;
            alphs++;
    }
        if(isspace(ch)&&isinword){
            words++;
            isinword==0;
    }

}
   div=((float)alphs)/words; 
    printf("The text has %d words,%d alphs,and per word has %.2f alpha\n",words,alphs,div);


    return 0;
}
