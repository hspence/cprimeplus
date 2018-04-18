#include <stdio.h>
void alter(int *,int*);
int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("x=%d,y=%d",num1,num2);
    putchar('\n');
    alter(&num1,&num2);
    printf("x=%d,y=%d",num1,num2);

    return 0;

}

void alter(int * x,int * y){
    int temp=*x;
    *x=*y;
    *y=temp;

}
