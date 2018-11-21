#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

void random1(int * list,int size,int n);

int main(void)
{
    int n,i;
 
    srand((unsigned int)time(0));
    int list[SIZE]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    printf("The original list:\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",list[i]);
    }
    printf("\nEnter the count you want to choose:\n");

    while(scanf("%d",&n)==1)
    {
        random1(list,SIZE,n);
        printf("Enter the count you want to choose:\n");
    }

    printf("Done.\n");

    return 0;
}

void random1(int * list,int size,int n)
{
    int i;
    int j;
    int index;

    int listcp[size];

    memcpy(listcp,list,size*sizeof(int));
    if(size<n)
        printf("The count you want is too big.\n");
    else
    {
        for(i=0;i<n;i++)
        {
            index=rand()%size;
            printf("%d ",listcp[index]);
            for(j=index;j<size-1;j++)
            {
                listcp[j]=listcp[j+1];
            }
            size--;
        }
        putchar('\n');     
    }
}
