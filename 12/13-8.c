#include <stdio.h>
#include <stdlib.h>
int *make_arry(int elem,int val);
void show_arry(const int ar[],int n);

int main(void)
{
    int *ptd;
    int size,value;

    printf("Enter the number of elements: \n");
    while(scanf("%d",&size)==1&&size>0)
    {
        printf("Enter the initialization value:\n");
        scanf("%d",&value);
        ptd=make_arry(size,value);
        if(ptd)
        {
            show_arry(ptd,size);
            free(ptd);
        }
        printf("Enter the number of elements:\n");
    }
    return 0;
}

int *make_arry(int elem,int val)
{
    int i;
    int *ptd;
    ptd=(int *) malloc(elem*sizeof(int));
    for(i=0;i<elem;i++)
        ptd[i]=val;
    return ptd;

}

void show_arry(const int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",ar[i]);
        if((i+1)%8==0)
            putchar('\n');
    } 
}
