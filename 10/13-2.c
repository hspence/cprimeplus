#include <stdio.h>
void cop_arr(double *,double *,int);
void cop_ptr(double *,double *,int);
void copy_ptrs(double *,double *,double *);

int main(void)
{
    int i;
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    cop_arr(target1,source,5);
    cop_ptr(target2,source,5);
    cop_ptrs(target3,source,source+5);
    for(i=0;i<5;i++) printf("%.1lf\n",target1[i]);
    for(i=0;i<5;i++) printf("%.1lf\n",target2[i]);
    for(i=0;i<5;i++) printf("%.1lf\n",target3[i]);

    return 0;
}

void cop_arr(double * target,double * source,int n)
{
    int i;
    for(i=0;i<n;i++) target[i]=source[i];
}
void cop_ptr(double * target,double * source,int n)
{
    int i;
    for(i=0;i<n;i++) *(target+i)=*(source+i);
}
void cop_ptrs(double *target,double *source,double *end)
{
    while(source<end)
    {
        *target=*source;
        target++;
        source++;
    }
}
