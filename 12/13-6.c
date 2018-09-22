#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i,num;
    int * ptd;
    ptd=(int *) calloc(10,sizeof(int));
    srand((unsigned int) time(0));

    for(i=0;i<1000;i++)
    {
        num=rand()%10;
        ptd[num]++;
    }
    for(i=0;i<10;i++)
    {
        printf("The num %d : %d times.\n",i+1,ptd[i]);
    }
    return 0;
}
