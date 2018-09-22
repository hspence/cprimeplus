#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int max;
    int number;
    int i=0;
    double * ptd;
    printf("what is the maximum number of type double entries?\n");
    scanf("%d",&max);
    ptd=(double *) malloc(max*sizeof(double));
    if(ptd==NULL)
    {
        puts("Memory allocation failed.Goodbye.\n");
        exit(EXIT_FAILURE);

    }
    puts("Enter the values(q to quit)");
    while(i<max&&scanf("%lf",&ptd[i])==1)
        i++;
    printf("Here are your %d entries:\n",number=i);
    for(i=0;i<max;i++)
    {
        printf("%7.2f ",ptd[i]);
        if(i%7==6)
            putchar('\n');
    }
    
    puts("Done.\n");
    free(ptd);

    return 0;
}
