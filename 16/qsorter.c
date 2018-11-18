#include <stdio.h>
#include <stdlib.h>

#define NUM 40
void fillarry(double ar[],int n);
void showarry(double ar[],int n);
int mycomp(const void * p1,const void * p2);

int main(void)
{
    double vals[NUM];
    fillarry(vals,NUM);
    showarry(vals,NUM);
    qsort(vals,NUM,sizeof(double),mycomp);
    puts("\nSorted list:");
    showarry(vals,NUM);

    return 0;
}
void fillarry(double ar[],int n)
{
    int index;
    for(index=0;index<n;index++)
    {
        ar[index]=(double) (rand()/(rand()+0.1));
    }
}

void showarry(double ar[],int n)
{
    int index;
    for(index=0;index<n;index++)
    {
        printf("%9.4f ",ar[index]);
        if(index%6==5)
            putchar('\n');
    } 
    putchar('\n');
}

int mycomp(const void * p1,const void * p2)
{
    int ret;

    double * a1=(double *) p1;
    double * a2=(double *) p2;
    if(*a1>*a2)
        ret=1;
    else if(*a1==*a2)
        ret=0;
    else
        ret=-1;
    
    return ret;
}






    
