#include <stdio.h>
void to_binary(unsigned long);

int main(void){

    unsigned long num;
    printf("Please enter an integer to :\n");

    while(scanf("%lu",&num)==1){
        printf("Binary equvalent:");
        to_binary(num);
        putchar('\n');
        printf("Please enter a integer:\n(q to quit)");
}
    printf("Done\n");

    return 0;
}

void to_binary(unsigned long num){
    int r;
    r=num%2;
    if(num>=2)
        to_binary(num/2);
    putchar(r==0?'0':'1');
    return;
    
}

