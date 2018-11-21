#include <stdio.h>
#define AVERAGE(X,Y) (1/((1/(X)+1/(Y))/2))

int main(void)
{
    float f1,f2,result; 
    
    printf("Enter two number:\n");
    scanf("%f %f",&f1,&f2);
    result=AVERAGE(f1,f2);
    printf("result is %f \n",result);

    return 0;
}

