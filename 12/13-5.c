#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int * sorted(int *ar);
int main(void)
{
    int i;
    int * ptd;
    srand((unsigned int) time(0));

    ptd =(int *) malloc(100*sizeof(int));
    for(i=0;i<100;i++)
    {
    ptd[i]=rand()%10+1; 
    }
    printf("before sorted :\n");
    for(i=0;i<100;i++)
        printf("%5d",ptd[i]);
    puts(" ");
    printf("let 's sorte it! press any key to continu:\n");
    getchar();
    sorted(ptd);
    for(i=0;i<100;i++)
        printf("%5d",ptd[i]);
    puts(" ");
    printf("Good bye.\n");
    return 0;
}

int * sorted(int * ar)
{
    int i,j,temp;
    for(i=0;i<99;i++)
    {
        for(j=i;j<100;j++)
        {
            if(ar[i]<ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    return ar;
}


