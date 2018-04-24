#include <stdio.h>
void cpp(double *,double *,double *);

int main(void)
{
    int i;
    double list[7]={4.43,43.5,67.4,65.2,54.3,4.6,35.2};
    double list2[3];
    cpp(list2,list+2,list+5);

    for(i=0;i<3;i++) printf("%.3lf\n",list2[i]);

    return 0;
}

void cpp(double * targe,double * source,double *end)
{
    while(source<end)
    {
        *targe=*source;
        targe++;
        source++;
}

}
