#include <stdio.h>
void cpp(int,int,double [*][*],double [*][*]);
void printf2(int,int,const double [*][*]);

int main(void)
{
    double list[3][5]={{24.5,34.5,24.1,43.5,34.5},{34.43,65.67,76.8,35.8,45.4},{3.4,5.4,24.3,3,5}};
    double list2[3][5];
    cpp(3,5,list,list2);
    printf2(3,5,list2);
    printf("END\n");


    return 0;
}

void cpp(int n,int m,double  source[n][m],double  targe[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            targe[i][j]=source[i][j];

    
}
void printf2(int n,int m,const double list[n][m])
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%3.3lf ",list[i][j]);
        printf("\n");
    } 
}

