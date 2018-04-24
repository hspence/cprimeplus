#include <stdio.h>
void printf2(const int [*][5],int);
void two(int [*][5],int);

int main(void)
{
    int list[3][5]={{4,34,5,31,3},{34,5,6,43,2},{34,53,5,34,5}};
    printf2(list,3);
    two(list,3);
    putchar('\n');
    printf2(list,3);

    return 0;
}

void printf2(const int list[3][5],int m)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",list[i][j]);
        printf("\n");

    }
}

void two(int list[3][5],int m)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<5;j++)
            list[i][j] *=2;
}
