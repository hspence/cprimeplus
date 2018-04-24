#include <stdio.h>
void cpp(double *,double *,double *);

int main(void)
{   int i,j;
    double list[3][3]={{5.46,53.6,8.79},{3.42,24.5,65.5},{43.5,24.3,21.7}};
    double list2[3][3];
    for(i=0;i<3;i++)
         cpp(list2[i],list[i],list[i]+3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++) printf("%.3lf  ",list2[i][j]);
        printf("\n");
}

    return 0;
}

void cpp(double *targe,double *source,double *end)
{
    while(source<end)
    {
        *targe=*source;
        targe++;
        source++;
}
}
