#include <stdio.h>
int main(void){
    int n;
    printf("please enter three intergers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last interger was %d",n);
    getchar();
    return 0;
}