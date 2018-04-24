#include <stdio.h>
int fun(double *,int);

int main(void)
{
    double list[10]={2.3,14.4,3.5,5.3,5.3,5.2,6.8,3.5,3.6,2.4};
    printf("The results is %d\n",fun(list,10));
    
    return 0;
}
int fun(double * list,int n)
{
    double max=list[0];
    int i,result;
    for(i=0;i<n;i++){
        if(max<list[i]) result =i;
        return result;
}
}
