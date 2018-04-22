#include <stdio.h>
int fibonacci(int);

int main(void){

    int num;
    printf("Please enter a nnumber:\n");
    scanf("%d",&num);

    printf("The result is %d ",fibonacci(num));

    return 0;
    
}
int fibonacci(int num){
    int c;
  int a=1,b=1;
  for(c=0;c<num-2;c++){
      a=a+b;
      b=a+b;
}
    return a;
}
