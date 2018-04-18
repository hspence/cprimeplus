#include <stdio.h>
int add(int,int);

int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d\n",add(num1,num2));

    return 0;
}

int add(int num1,int num2){

    return num1+num2;

}
