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
    double result=1;
    int i;
    if(num==0.0){
        return 0;
}
    if(time>=0){
        for(i=0;i<time;i++){
            result *=num; 
    }
    }
    if(time<0){
        for(i=0;i<-time;i++)
            result *=num;
        result = -(1/result);
}
    return result;
    
}
