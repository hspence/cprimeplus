#include <stdio.h>
#define stars "*********************************\n"

double min(double,double);
void chline(char,int,int);
void larger_of(double*,double*);
void change(double*,double*,double*);
double harmonic_mean(double,double);

int main(void){
    int cow,line,t;
    double num1,num2,f1,f2,c1,c2,c3,h1,h2;
    char ch;

    printf("NOw test min function:\n");
    printf("enter two number:\n");
    scanf("%lf %lf",&num1,&num2);
    printf("The min number is %lf\n",min(num1,num2));
    printf("%s",stars);

    printf("now test chline function enter a char and two number:\n");
    while(getchar()!='\n') continue;
    scanf("%c %d %d",&ch,&cow,&line);
    chline(ch,cow,line);
    printf("%s",stars);
    
    printf("Now test large_of function:\n");
    printf("enter two number:\n");
    scanf("%lf %lf",&f1,&f2);
    larger_of(&f1,&f2);
    printf("f1=%lf f2=%lf\n",f1,f2);
    printf("%s",stars);
    
    printf("now test change function:\n");
    printf("enter three number :\n");
    scanf("%lf %lf %lf",&c1,&c2,&c3);
    printf("c1=%lf,c2=%lf,c3=%lf\n",c1,c2,c3);
    change(&c1,&c2,&c3);
    printf("c1=%lf,c2=%lf,c3=%lf\n",c1,c2,c3);
    printf("%s",stars);
    
    printf("now test harmonic function:\n");
    printf("enter two number:\n");
    scanf("%lf %lf",&h1,&h2);
    printf("the result is %lf\n",harmonic_mean(h1,h2));
    printf(stars);

    
    return 0;
}

double min(double a,double b){
    double min=a;
    if(min>b) min=b;
    return min;
}

void chline(char ch,int i,int j){
    int cow,line;
    for(line=0;line<j;line++){
    for(cow=0;cow<i;cow++) putchar(ch);
    putchar('\n');
    }
    
}
double harmonic_mean(double a,double b){
    double harmonic;
    harmonic=(1/(1/a+1/b));
    return harmonic;
}


void change(double *a,double *b,double *c){
       double min=*a,mid=*b,max=*c;
       double t;
       if(min>mid){
           min=*b;
           mid=*a;
   }
       if(mid>max){
           mid=*c;
           max=*b;
           if(min>mid){
               t=min;
               min=mid;    
               mid=t;
       }
   }
       *a=min;
       *b=mid;
       *c=max;
   
}

void larger_of(double *a,double * b){
    double max=*a<*b?*b:*a;
    *a=max;
    *b=max;

}
