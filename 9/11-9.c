#include <stdio.h>
double power(double,int);

int main(void){
    double num;
    int time;
    printf("please enter a number and times:\n");
    scanf("%lf %d",&num,&time);
    printf("The result is %lf.\n",power(num,time));

    
    return 0;
    
}
double power(double num,int time){
    if(time==0) return 1.0;
    else if(time>0) return num*power(num,time-1);
    else return power(num,time+1)/num;


}
