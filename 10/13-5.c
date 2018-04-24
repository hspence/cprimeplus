#include <stdio.h>
double fun(double *,int);

int main(void)
{
    double list[10]={23.2,43.6,43.1,1.4,54.2,45.6,76.4,35.3,35.1,46.3};
    printf("The result is %lf .\n",fun(list,10));
    
    return 0;
}

double fun(double * list,int n)
{
   double max=list[0],min=list[0];
   int i;
   for(i=0;i<n;i++)
    {
        if(max<list[i]) max =list[i];
        if(min>list[i]) min=list[i];
    }
   return max - min;
}
